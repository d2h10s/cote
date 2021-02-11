#include <stdio.h>

int Rev(int n) {
	int r = n, l = 1;
	while (r /= 10) l*=10;
	while (n > 0) {
		r += n % 10 * l;
		l /= 10;
		n /= 10;
	}
	return r;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", Rev(Rev(a) + Rev(b)));

}