#include <stdio.h>

int main() {
	long long a, b, c;
	while(1){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(!(a|b|c))break;
		if (c < a) {
			int temp = a;
			a = c;
			c = temp;
		}
		else if (c < b) {
			int temp = b;
			b = c;
			c = temp;
		}
		printf(c*c==a*a+b*b?"right\n":"wrong\n");
	}
}