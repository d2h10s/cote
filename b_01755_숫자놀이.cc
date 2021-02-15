#include <stdio.h>
#include <string.h>
#include <algorithm>

const char num[10][10] = {
    "zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"
};
int main(){
    int m, n, arr[100];
    scanf("%d %d", &m, &n);
    for(int i = 0; i < 100; i++) arr[i] = i;
    std::sort(arr + m, arr + n + 1, [](int a, int b){
        int j, k;
        if(a < 10) j = a;
        else j = a / 10;
        if(b < 10) k = b;
        else k = b / 10;
        if(j == k){
            if(a / 10 > 0 && b / 10 == 0) return false;
            if(b / 10 > 0 && a / 10 == 0) return true;
            j = a % 10;
            k = b % 10;
        }
        return strcmp(num[j], num[k]) < 0;
    });
    int cnt = 1;
    for(int i = m; i <= n; i++, cnt++){
        printf("%d ", arr[i]);
        if(cnt % 10 == 0) printf("\n");
    }
}