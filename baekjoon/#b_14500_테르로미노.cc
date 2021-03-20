#include <iostream>
#include <vector>
using namespace std;

int sum1(const vector<vector<int>>& a, const int& n, const int& m) {
	int sum, max = 0, i, j;
	for (i = 0; i < m - 3; i++) {
		for (j = 0; j < n; j++) {
			sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i][j + 3];
		}
		max = sum > max ? sum : max;
	}
	return max;
}

int sum2(const vector<vector<int>>& a, const int& n, const int& m) {
	int sum, max = 0, i, j;
	for (i = 0; i < m - 1; i++) {
		for (j = 0; j < n - 1; j++) {
			sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
		}
		max = sum > max ? sum : max;
	}
	return max;
}

int sum3(const vector<vector<int>>& a, const int& n, const int& m) {
	int sum, max = 0, i, j;
	for (i = 0; i < m - 1; i++) {
		for (j = 0; j < n - 2; j++) {
			sum = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 2][j + 1];
		}
		max = sum > max ? sum : max;
	}
	return max;
}

int sum4(const vector<vector<int>>& a, const int& n, const int& m) {
	int sum, max = 0, i, j;
	for (i = 0; i < m - 2; i++) {
		for (j = 0; j < n - 1; j++) {
			sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i + 2][j + 1];
		}
		max = sum > max ? sum : max;
	}
	return max;
}

int sum5(const vector<vector<int>>& a, const int& n, const int& m) {
	int sum, max = 0, i, j;
	for (i = 0; i < m - 1; i++) {
		for (j = 0; j < n - 2; j++) {
			sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1];
		}
		max = sum > max ? sum : max;
	}
	return max;
}

int main() {
	int i, j, n, m, max = 0, a[5]; // n: 가로, m: 세로
	scanf_s("%d %d", &n, &m);
	vector<vector<int>> tetromino(m, vector<int>(n, 0));
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> tetromino[j][i];
		}
	}
	a[0] = sum1(tetromino, n, m);
	a[1] = sum2(tetromino, n, m);
	a[2] = sum3(tetromino, n, m);
	a[3] = sum4(tetromino, n, m);
	a[4] = sum5(tetromino, n, m);
	for (i = 0; i < 5; i++)
		max = max < a[i] ? a[i] : max;
	cout << max;

}