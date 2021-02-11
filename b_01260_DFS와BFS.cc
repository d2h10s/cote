#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void dfs(vector<vector<short>> edges, short start) {
	vector<bool> visited(edges.size(), 0);
	stack<short> ss;
	short cur = start, tmp;
	ss.push(cur);
	cout << cur;
	while (!ss.empty()) {
		visited[cur] = 1;
		while (!edges[cur].empty()) {
			tmp = edges[cur].front();
			edges[cur].erase(edges[cur].begin());
			if (!visited[tmp]) ss.push(tmp);
		}
		tmp = ss.top();
		ss.pop();
		if (!visited[tmp]) {
			cur = tmp;
			cout << " " << cur;
		}
	}
}

void bfs(vector<vector<short>> edges, short start) {
	vector<bool> visited(edges.size(), 0);
	queue<short> qq;
	short cur = start, tmp;
	qq.push(cur);
	cout << cur;
	while(!qq.empty()){
		visited.at(cur) = 1;
		while (!edges[cur].empty()) {
			tmp = edges[cur].back();
			if (!visited[tmp]) qq.push(tmp);
			edges[cur].pop_back();
		}
		tmp = qq.front();
		qq.pop();
		if (!visited.at(tmp)) {
			cur = tmp;
			cout << " " << cur;
		}
	}
}

int main() {
	short i, vorNum, edgeNum, start, u, v;
	scanf("%hd %hd %hd", &vorNum, &edgeNum, &start);
	vector<vector<short>> edges(vorNum + 1, vector<short>());
	for (i = 0; i < edgeNum; i++) {
		scanf("%hd %hd", &u, &v);
		edges.at(u).push_back(v);
		edges.at(v).push_back(u);
	}
	for (i = 1; i <= vorNum; i++)
		sort(edges.at(i).begin(), edges.at(i).end(), [](short a, short b) {return a > b; });
	dfs(edges, start);
	cout << endl;
	bfs(edges, start);

}