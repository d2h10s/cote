#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	vector<int> height, answer;
	int i, j, k, sum, tmp;
	for (i = 0; i < 9; i++) {
		cin >> tmp;
		height.push_back(tmp);
	}
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			sum = 0;
			answer.clear();
			for (k = 0; k < 9; k++) {
				if (k == i || k == j) continue;
				sum += height[k];
				answer.push_back(height[k]);
			}
			if (sum == 100) {
				sort(answer.begin(), answer.end());
				for (i = 0; i < 7; i++) {
					cout << answer.front() << endl;
					answer.erase(answer.begin());
				}
			}
		}
	}
	return 0;
}
