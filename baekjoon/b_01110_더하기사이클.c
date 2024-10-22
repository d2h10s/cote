#include <stdio.h>

int main(){
    int n,answer,cnt=0;
    scanf("%d", &n);
    answer=n;
    do{
        answer= (answer%10*10)+(answer%10+answer/10)%10;
        cnt++;
    }while(n!=answer);
    printf("%d",cnt);
}