#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a = n<m? m:n, b = n<m? n:m, c = a % b;
    while(c > 0){
        a = b;
        b = c;
        c = a % b;
    }
    printf("%d\n%d", b, n * m / b);
}