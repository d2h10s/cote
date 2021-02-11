#include <stdio.h>

int main() {
	int now[3], start[3];
	scanf("%d:%d:%d", &now[0], &now[1], &now[2]);
	scanf("%d:%d:%d", &start[0], &start[1], &start[2]);
	now[2] = start[2] - now[2];
	now[1] = start[1] - now[1];
	now[0] = start[0] - now[0];
	if(now[2] < 0) now[2] += 60, now[1] -= 1;
	if(now[1] < 0) now[1] += 60, now[0] -= 1;
	if(now[0] < 0) now[0] += 24;
	printf("%02d:%02d:%02d", now[0], now[1], now[2]);
}