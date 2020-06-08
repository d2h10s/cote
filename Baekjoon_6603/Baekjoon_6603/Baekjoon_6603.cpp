#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(int now, int size, vector<int> number, vector<int> comb, int level, vector<int> visited) {
	if (level > 6) {
		for (auto it = comb.begin(); it != comb.end(); it++)
			cout << *it << " ";
		cout << endl;
		return 0;
	}
	for (auto ite = number.begin(); ite != number.end(); ite++) {
		bool  flag = 0;
		for (auto iter = visited.begin(); iter != visited.end(); iter++) {
			if (*iter == now) flag = 1;
		}
		if (flag) continue;
		visited.push_back(*ite);
		comb.push_back(*ite);
		dfs(*ite, size, number, comb, level + 1, visited);
		comb.pop_back();
		visited.push_back(*ite);
	}

	return 0;
}

int main() {
	int i, j, caseNum = 1, size, tmp;
	vector<vector<int>> number;
	while (1) {
		vector<int> temp;
		cin >> size;
		if (!size) break;
		for (i = 0; i < size; i++) {
			
			scanf_s("%d", &tmp);
			temp.push_back(tmp);
		}
		number.push_back(temp);
		caseNum++;
	}
	for (i = 0; i < caseNum; i++) {
		vector<int> comb, visited;
		sort(number[i].begin(), number[i].end());
		dfs(number[i][0], number[i].size(), number[i], comb, 0, visited);
	}
}