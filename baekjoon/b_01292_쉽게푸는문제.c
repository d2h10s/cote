#include <stdio.h>


int main() {
	int cnt = 0, n = 1, a, b, s = 0;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= b; i++, cnt++){
		if(cnt >= n) n++, cnt = 0;
		if(i >= a) s += n;
	}
	printf("%d", s);
}