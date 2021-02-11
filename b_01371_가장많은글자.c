#include <stdio.h>

int main() {
	int a[26] = {0};
    char s;
	while ((s = getchar()) != EOF) {
		if (s == '\n' || s == ' ') continue;
		a[s - 'a']++;
	}
	int max = 0;
	for (int i = 0; i < 26; i++)
		if (a[i] > max)
			max = a[i];
	for (int i = 0; i < 26; i++) {
		if (a[i] == max) {
			printf("%c", i + 'a');
		}
	}
}