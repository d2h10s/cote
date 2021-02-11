#include <stdio.h>
#include <ctype.h>

int main(){
    char hex[7], i;
    int sum = 0;
    scanf("%s", hex);
    for(i = 0; hex[i] != '\0'; i++){
        if(isdigit(hex[i]))
            hex[i] -= '0';
        else
            hex[i] = hex[i] - 'A' + 10;
    }
    int multiplier = 1;
    for(i--; i >= 0; i--, multiplier*=16){
        sum += hex[i]*multiplier;
    }
    printf("%d", sum);
}