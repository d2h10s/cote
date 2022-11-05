#include <stdio.h>

int X[60000], Y[60000];

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", X+i);
    for (int i = 0; i < n; i++)
        scanf("%d", Y+i);
    for (int i = 0; i < n; i++)
        sum += (*(X+i))*(*(Y+i));
    printf("%d", sum);
}