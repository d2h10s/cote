#include <stdio.h>

int main(){
	int n, num[50], M = 0, m = 1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		M = M < num[i] ? num[i] : M;
		m = m > num[i] ? num[i] : m;
	}
	printf("%d", M * m);
}