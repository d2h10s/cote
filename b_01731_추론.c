#include <stdio.h>

int main(){
    int p, q, n, num[50];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", num + i);
    }
    if(num[1] - num[0] == num[2] - num[1]){
        printf("%d", num[n - 1] + num[1] - num[0]);
    }
    else{
        printf("%d", num[n - 1] * (num[1]/num[0]));
    }
}