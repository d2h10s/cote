#include <stdio.h>

int main(){
    char num[501], answer[501] = {0}, len;
    scanf("%s", num);
    int num0 = 0, num1 = 0;
    for(int i = 0; num[i] != '\0'; i++){
        if(num[i] == '0') num0++;
        else num1++;
    }
    num0 /= 2;
    num1 /= 2;
    for(int i = 0; num[i] != '\0'; i++){
        if(num0 && num[i] == '0'){
            printf("0");
            num0--;
        }
        else if(num1){
            num1--;
        }
        else{
            printf("1");
        }
    }
}