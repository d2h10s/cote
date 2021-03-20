#include <stdio.h>

int main(){
    int n, A[50], B[50], s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (A[i] < A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            if (B[i] > B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) s += A[i] * B[i];
    printf("%d",s);
}