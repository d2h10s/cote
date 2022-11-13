#include <bits/stdc++.h>

int main(){
    int n, val = 0;
    scanf("%d", &n);
    char s[4];
    for(int i = 0; i < n; i++){
        scanf("%s", &s);
        if (s[1] == '+') val++;
        else val--;
    }
    printf("%d", val);
}