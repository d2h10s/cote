#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define E_Max 15
#define S_Max 28
#define M_Max 19

int main() {
	short E, S, M, e = 1, s = 1, m = 1, yy = 1;
	scanf_s("%hd %hd %hd", &E, &S, &M);
	while (1) {
		if (E == e && S == s && M == m) break;
		if (e == E_Max) e = 1;
		else e++;
		if (s == S_Max) s = 1;
		else s++;
		if (m == M_Max) m = 1;
		else m++;
		yy++;
	}
	cout << yy;
	return 0;
}
