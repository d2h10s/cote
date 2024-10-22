#include <stdio.h>

int main(){
    int n,test_case;
    scanf("%d", &n);
    for(test_case=0;test_case<n;test_case++){
        int score=0,i,p=0;
        char str[81];
        scanf("%s", str);
        for(i=0;str[i];i++){
            score += str[i]=='O'? ++p:(p=0);
        }
        printf("%d\n", score);
    }
}