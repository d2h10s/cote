#include <stdio.h>
/*
 * odd + odd = even
 * odd + even = odd
 * even + even = even
 */
int main(){
    int n;
    scanf("%d", &n);
    printf(n%2?"NO":"YES");
    return 0;
}