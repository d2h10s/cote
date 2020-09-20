#include <iostream>
#include <string>
#include <vector>

using namespace std;

short dfs(short size, short now, vector<short> num , vector<short> visited) {
	if (now > size) {
		for (int i = 0; i < size; i++)
			printf("%d ", num[i]);
		printf("\n");
		return 0;
	}
	for (int i = 1; i <= size; i++) {
		if (visited[i])	continue;
		visited[i] = true;
		num.push_back(i);
		dfs(size, now + 1, num, visited);
		visited[i] = false;
		num.pop_back();
	}
	return 0;
}

int main() {
	short size;
	vector<short> num;
	cin >> size;
	vector<short> visited(size + 1, 0);
	dfs(size, 1, num, visited);
	
}