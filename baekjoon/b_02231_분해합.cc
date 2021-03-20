#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int dism(int n) {

	for (int i = sqrt(n); i < n; i++) {
		int sum = i, m = i;
		while (m > 0) {
			sum += m % 10;
			m /= 10;
		}
		if (sum == n) return i;
	}
	return 0;
}

int main() {
	int n;
	cin >> n;
	cout << dism(n);
}