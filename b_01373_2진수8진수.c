#include <stdio.h>
#include <string.h>

int main() {
	char bin[1000000 + 1];
	scanf("%s", bin);
	int len = strlen(bin), i, s = 0, idx = 0;
	int j = (len - 1) % 3;
	for(i = 0; i < len; i++, j--){
		if(j < 0) j = 2, bin[idx++] = s + '0', s = 0;
		//printf("%d %d %d\n", i, j, s);
		s += (bin[i] - '0') << j;
	}
	bin[idx++] = s + '0';
	bin[idx] = '\0';
	printf("%s", bin);
}