#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char b[51];
    scanf("%d", &n);
    while(n--){
        int n = 0, isVPS = 1;
        scanf("%s", b);
        for(int i = 0; i < strlen(b); i++){
            if(b[i] == '(') n++;
            else n--;
            if(n < 0){
                isVPS = 0;
                break;
            }
        }
        if(n != 0 || ! isVPS) printf("NO\n");
        else printf("YES\n");
    }
}