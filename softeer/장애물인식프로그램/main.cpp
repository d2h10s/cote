#include<iostream>
#include<vector>

using namespace std;

int N, map[25][25]{0};

void dfs(int x, int y, int v_x, int v_y, int &block){
    x += v_x;
    y += v_y;
    if(x < 0 || y < 0 || x >= N || y >= N) return;

    if(map[x][y] == 1) map[x][y] = -1;
    else return;

    block++;
    dfs(x, y, -1, -1, block);
    dfs(x, y, -1,  1, block);
    dfs(x, y,  1, -1, block);
    dfs(x, y,  1,  1, block);
}

int main(int argc, char** argv)
{
    scanf("%d", &N);
    int cnt = 0;
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%d", &map[i][j]);
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++){
            int  block = 0;
            if(map[i][j] != -1) dfs(i, j, 0, 0, block);
            printf("block is %d\n", block);
            if (block != 0) cnt++;
        }
    cout << cnt;
    return 0;
}