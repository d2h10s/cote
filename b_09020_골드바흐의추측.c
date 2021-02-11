#include <stdio.h>
#define LEN 10000+1

int main() {
	int n, g_num;
    char num[LEN] = { 0 };
	scanf("%d", &n);
	for (int i = 2; i <= LEN; i++)
			for (int j = i << 1; j <= LEN; j+=i)
				num[j] = 1;
	while (n--) {
		int g_num;
		scanf("%d", &g_num);
		for (int i = g_num/2; g_num > i; i++) {
			if (!(num[i] |num[g_num-i])) {
				printf("%d %d\n", g_num-i, i);
				break;
			}
		}
	}
}