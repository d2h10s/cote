#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, map[25][25]{0};

void dfs(int x, int y, int v_x, int v_y, int &block){
    x += v_x;
    y += v_y;
    if(x < 0 || y < 0 || x >= N || y >= N) return;

    if(map[x][y] == 1) map[x][y] = -1;
    else return;

    block++;
    dfs(x, y, 0, -1, block);
    dfs(x, y, 0,  1, block);
    dfs(x, y,  1, 0, block);
    dfs(x, y,  -1,  0, block);
}

int main(int argc, char** argv)
{
    scanf("%d", &N);
    vector<int> block_num;
    int cnt = 0;
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%1d", &map[i][j]);
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) {
            int block = 0;
            if (map[i][j] != -1) dfs(i, j, 0, 0, block);
            if (block != 0) cnt++, block_num.emplace_back(block);
    }
    printf("%d\n", cnt);
    sort(block_num.begin(), block_num.end());
    for(auto item:block_num) printf("%d\n", item);
    return 0;
}