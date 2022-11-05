#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n, c, sc = 0;
        float g, sg = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d %f", &c, &g);
            sc += c;
            sg += c*g;
        }
        printf("%d %.1f\n", sc, sg/sc);
    }
}