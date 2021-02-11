#include <stdio.h>

int main() {
	int x, y, w, h, px, py;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (x > w / 2) x = w - x;
	if (y > h / 2) y = h - y;
	printf("%d", x > y ? y : x);
}