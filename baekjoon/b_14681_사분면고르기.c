#include <stdio.h>

int main(){
    int x,y,a;
    scanf("%d %d",&x,&y);
    if(x>0&&y>0) a=1;
    else if(x<0&&y>0) a=2;
    else if(x<0&&y<0) a=3;
    else a=4;
    printf("%d", a);
}