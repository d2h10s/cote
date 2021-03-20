#include <stdio.h>

int main(){
    char x, y, n, answer = 1;
    scanf("%hhd", &n);
    while(n--) {
        scanf("%hhd %hhd", &x, &y);
        if (x == answer) answer = y;
        else if (y == answer) answer = x;
    }
    printf("%d", answer);
}