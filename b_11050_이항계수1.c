#include <stdio.h>

int f(int n){
    if(n < 2) return 1;
    return f(n-1)*n;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", f(n)/(f(k)*f(n-k)));
}