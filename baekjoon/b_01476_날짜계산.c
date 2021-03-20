#include <stdio.h>

int main(){
    int E, S, M;
    int e = 1, s = 1, m = 1;
    int Y = 1;
    scanf("%d %d %d", &E, &S, &M);
    while(E != e || S != s || M != m){
        Y++;
        if (++e > 15) e = 1;
        if (++s > 28) s = 1;
        if (++m > 19) m = 1;
    }
    printf("%d", Y);
}