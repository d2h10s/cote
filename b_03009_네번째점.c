#include <stdio.h>

int main() {
	int x[3], y[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	printf("%d ", x[0] == x[1] ? x[2] : x[1] == x[2] ? x[0] : x[1]);
	printf("%d", y[0] == y[1] ? y[2] : y[1] == y[2] ? y[0] : y[1]);
}