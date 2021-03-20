#include <stdio.h>

int main(){
	int n;
	char s[50][51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", &s[i][0]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; s[i][j] != '\0'; j++) {
			if(s[0][j] != s[i][j])
				s[0][j] = '?';
		}
	}
	printf("%s", s[0]);
}