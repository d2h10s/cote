#include <stdio.h>

int main(){
    int n, seat[1000] = {0}, temp, cnt = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &temp);
        if(!seat[temp])
            seat[temp] = 1;
        else
            cnt++;
    }
    printf("%d", cnt);
}