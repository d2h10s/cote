#include <stdio.h>

int main() {
	char a[11];
	scanf("%s", a);
	for(int i = 0; a[i+1] != '\0'; i++){
		for(int j = i + 1; a[j] !='\0'; j++){
			if(a[i] < a[j]){
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%s", a);
}