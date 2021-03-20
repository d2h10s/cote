#include <stdio.h>

int main(){
	char s[30], dic[26] = { 0 };
	int n, p = 1;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		dic[s[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (dic[i] > 4) {
			printf("%c", i + 'a');
			p = 0;
		}
	}
	if(p) printf("PREDAJA");
}