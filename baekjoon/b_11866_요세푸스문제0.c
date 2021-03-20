#include <stdio.h>

int main() {
    int n, k, p[1000] = { 0 };
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) p[i] = 1;
    int idx = 0;
    printf("<");
    for(int i = 0; i < n; i++){
        int cnt = 0;
        while (cnt < k) {
            if (idx >= n) idx = 0;
            if (p[++idx]) cnt++;
        }
        p[idx] = 0;
        printf("%d%s", idx, i < n - 1 ? ", " : "");
    }
    printf(">");
}