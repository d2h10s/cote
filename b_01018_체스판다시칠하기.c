#include <stdio.h>

int main() {
    int n, m;
    char board[50][50], buf;
    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%c", &board[i][j]);
        }
        scanf("%c", &buf);
    }

    int min = 10000;
    for (int i = 0; i < n - 8 + 1; i++) {
        for (int j = 0; j < m - 8 + 1; j++) {
            int w = 0, b = 0;

            for (int k = i; k < 8+i; k++) {
                for (int l = j; l < 8+j; l++) {
                    if ((k + l) % 2 == 0) {
                        if (board[k][l] == 'W') w++;
                        else b++;
                    }
                    else if ((k + l) % 2 == 1) {
                        if (board[k][l] == 'B') w++;
                        else b++;
                    }
                }
            }
            min = min > w ? w : min;
            min = min > b ? b : min;
        }
    }
    printf("%d", min);
}