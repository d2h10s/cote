#include <stdio.h>

int main(){
    char t[2000001] = {0};
    int n, end;
    int std[100];
    scanf("%d %d", &n, &end);
    for(int i = 0; i < n; i++){
        scanf("%d", std+i);
    }
    for(int i = 1; i <= end; i++){
        for(int j = 0; j < n; j++){
            if(std[j] <= end/i) t[std[j]*i] = 1;
        }
    }
    long long s = 0;
    for(int i = 1; i <= end; i++){
        if(t[i]) s++;
    }
    printf("%lld", s);
}