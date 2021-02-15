#include <stdio.h>

int main(){
    long long int n, s = 0;
    scanf("%lld", &n);
    for(long long int i = 1; i < n ; i++)
        s += n * i + i;
    printf("%lld", s);
}