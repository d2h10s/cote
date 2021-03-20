#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main() {
	int n;
	scanf("%d", &n);
	printf("%.6f\n%.6f", n * n * pi, n * n * 2.0);
}