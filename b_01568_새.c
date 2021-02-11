#include <stdio.h>

int main(){
    int n, s = 0;
    scanf("%d", &n);

    for(int k = 1 ; n > 0; k++){
        n -= k;
        s++;
        if(n <= k) k = 0;
    }
    printf("%d", s);
}