#include <stdio.h>

int main(){
    int a,b,c,i,cnt[10]={0};
    scanf("%d\n%d\n%d", &a, &b, &c);
    a*=b*c;
    while(a>0){
        cnt[a%10]++;
        a/=10;
    }
    for(i=0;i<10;i++) printf("%d\n", cnt[i]);
}