#include <stdio.h>

int main(){
    int x, cnt = 0;
    scanf("%d", &x);
    for(; x > 0; x>>=1){
        if(x&1) cnt++;
    }
    printf("%d", cnt);
}