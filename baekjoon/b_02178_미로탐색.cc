#include <iostream>
#include <queue>
#include <vector>

struct pos{int x; int y;};

using namespace std;
int main(){
    int N, M, i, j, cnt = 0;
    pos vec[4]{{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<int>> map, isVisited;
    queue<pos> q;
    scanf("%d %d", &N, &M);
    map.resize(N, vector<int>(M,0));
    isVisited.resize(N, vector<int>(M,0));

    getchar();
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            map[i][j] = getchar() - '0';
        }
        getchar();
    }
    q.push(pos{0, 0});
    isVisited[0][0] = 1;

    while(!q.empty()){
        auto cur = q.front(); q.pop();

        if (cur.x == N-1 && cur.y == M-1) break;
        for(i = 0; i < 4; i++){
            pos next{cur.x+vec[i].x, cur.y+vec[i].y};
            if (next.x < 0 || next.y < 0 || next.x >= N || next.y >= M) continue;
            if (map[next.x][next.y] == 1 && isVisited[next.x][next.y] == 0){
                isVisited[next.x][next.y] = isVisited[cur.x][cur.y] + 1;
                q.push(pos{next.x, next.y});
            }
        }
    }
    printf("%d\n", isVisited[N-1][M-1]);
}