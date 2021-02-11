#include <stdio.h>

int main(){
    char a[100][100] = {0}, n, m, lx, ly, rx, ry;
    int cnt = 0;
    scanf("%hhd %hhd", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%hhd %hhd %hhd %hhd", &lx, &ly, &rx, &ry);
        for(int j = ly - 1; j < ry; j++){
            for(int k = lx - 1; k < rx; k++){
                a[j][k]++;
                if(a[j][k] > m) cnt++, a[j][k] = -100;
            }
        }
    }
    printf("%d", cnt);
}