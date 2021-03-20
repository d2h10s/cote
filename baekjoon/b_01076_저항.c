#include <stdio.h>
#include <string.h>
int main(){
	const char color[10][7] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	char s[10];
	long long n[3], c = 0;
	for(int j = 0; j < 3; j++){
	scanf("%s", &s);
		for (int i = 0; i < 10; i++) {
			if (!strcmp(s, color[i])) {
				n[c++] = i;
				break;
			}
		}
	}
	c = n[0] * 10 + n[1];
	while (n[2]--) c *= 10ll;
	printf("%lld", c);
}