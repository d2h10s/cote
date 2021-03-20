#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(short size, short level, vector<short> num, vector<short> comb, vector<short> copy, int& max) {
	if (level > size) {
		int sum = 0;
		for (short i = 0; i < size - 1; i++) {
			sum += abs(comb[i] - comb[i + 1]);
		}
		max = sum > max ? sum : max;
		return max;
	}
	for (auto it = num.begin(); it != num.end(); it++) {
		bool flag = 0;
		for (short i = 0; i < copy.size(); i++) {
			if (copy[i] == *it) {
				copy.erase(copy.begin() + i);
				flag = 0;
				break;
			}
			flag = 1;
		}
		if (flag) continue;
		comb.push_back(*it);
		dfs(size, level + 1, num, comb, copy, max);
		copy.push_back(*it);
		comb.pop_back();
	}
	return max;
}

int main() {
	short i, size;
	int max = -100;
	cin >> size;
	vector<short> number(size, 0), comb, copy;
	for (i = 0; i < size; i++)
		scanf("%hd", &number[i]);
	copy = number;
	cout << dfs(size, 1, number, comb, copy, max);

}