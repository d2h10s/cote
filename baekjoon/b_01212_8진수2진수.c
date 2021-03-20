#include <stdio.h>

int main() {
	char n[333335];
    int size = 0, s = 1;
	scanf("%s", n);
	while (n[++size]);
	for(int i = 0; i < size; i++){
		char tmp = n[i] - '0';
		for (int j = 4, k = 2; j; j>>=1, k--) {
			if (!i && j == 4) while ( k >= 0 && !((tmp & j) >> k)) j >>= 1, k--;
			printf("%d", (tmp & j) >> k);
		}
	}
}

/*
#include <stdio.h>

int main() {
	char n[333335];
	int size = 0;
	scanf("%s", &n);
	while (n[++size]);
	for(int i = 0; i < size; i++){
		char tmp = n[i], bin[]{0, 0, 0, '\0'};
		for (int j = 2; j > -1; j--, tmp /= 2)
			bin[j] = tmp % 2 + '0';
		if (!i) {
			while (bin[0] == '0') for(int i = 0; i < 3; i++) bin[i] = bin[i+1];
		}
		printf("%s", bin);
	}
	if (size == 1 && n[0] == '0') printf("0");
	
}
*/