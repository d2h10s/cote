#include <stdio.h>

int main(){
    int n, cnt = 0, answer = 666;
    scanf("%d", &n);
    for(int i = 666; cnt < n; i++){
        for(int temp = i; temp > 0; temp /= 10) {
            if(temp % 10 == 6){
                temp /= 10;
                if (temp % 10 == 6){
                    temp /= 10;
                    if(temp % 10 == 6){
                        answer = i;
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d", answer);
}