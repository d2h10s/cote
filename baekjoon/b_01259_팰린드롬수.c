#include <stdio.h>
#include <string.h>

int main(){
    char s[6];
    while(1){
        scanf("%s", s);
        if(!strcmp(s, "0")) break;
        int len = strlen(s);
        int isPalin = 1;
        for(int i = 0; i < len / 2; i++){
            if(s[i] != s[len - i - 1]){
                isPalin = 0;
                break;
            }
        }
        printf("%s\n", isPalin? "yes":"no");
    }
}