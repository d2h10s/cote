#include <stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    printf("%d", (y%100!=0||y%400==0)&&y%4==0? 1:0);
}