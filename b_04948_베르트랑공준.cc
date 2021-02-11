#include <iostream>
#define size 123457
int* n = new int[size] {0}, * m = new int[size * 2]{ 0 };
int main() {
	int max = 0, i = 0, cnt = 0, len;
	do{
		scanf("%d", n + i);
		max = n[i] > max ? n[i] : max;
	} while (n[i++]);
	len = i;
	for (i = 2; i <= 2 * max; i++) {
		if (!m[i]) {
			cnt++;
			for (int j = i << 1; j <= 2 * max; j+=i) {
				m[j] = 1;
			}
		}
		m[i] = cnt;
	}
	for (i = 0; i < len - 1; i++) {
		printf("%d\n", m[n[i]*2] - m[n[i]]);
	}
}