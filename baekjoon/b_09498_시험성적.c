#include <stdio.h>

int main(){
    int s;
    scanf("%d", &s);
    s = s>99? 90:s<60? 40:s;
    s = 'A'+9-(s/10);
    printf("%c",s);
}