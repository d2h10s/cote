#include <stdio.h>

int main(){
    int n, cs = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &n);
        cs += n * n;
    }
    printf("%d", cs % 10);
}