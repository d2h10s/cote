#include<iostream>
#include<vector>
#include<stack>
#define MAX_SIZE 100

using namespace std;

int N, M, map[MAX_SIZE][MAX_SIZE]{0}, visited[MAX_SIZE][MAX_SIZE]{0};

struct pos{
    int r,c;
    pos operator+(pos ref){
        return pos{r+ref.r,c+ref.c};
    }
    bool is_out_of_range(){
        return r < 0 || c < 0 || r >= N || c >= M;
    }
};

pos dir[] = {pos{0,-1}, pos{0, 1}, pos{-1,0}, pos{1,0}};


bool is_all_melted(){
    int cnt = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++){
            if (map[i][j] > 0) cnt++;
            visited[i][j] = 0;
        }
    if (cnt) return false;
    else return true;
}

bool is_touched(pos now){
    int cnt = 0;
    for(int i = 0; i < 4; i++){
        pos temp = now + dir[i];
        if(temp.is_out_of_range()) continue;
        if (map[temp.r][temp.c] == 0) cnt++;
    }
    return cnt>1? true:false;
}

void disp(){
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%2d ", map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void dfs(pos now){
    if(now.is_out_of_range() || visited[now.r][now.c]) return;
    visited[now.r][now.c] = 1;
    
    map[now.r][now.c]--;
    if(map[now.r][now.c] == 0) return;
    for(int i = 0; i < 4; i++)
        dfs(now + dir[i]);
}


int main(int argc, char** argv)
{
    scanf("%d %d", &N, &M);
    int cnt = 0;
    for(int i = 0; i < N; i++) for(int j = 0; j < M; j++) scanf("%d", &map[i][j]);
    
    while(!is_all_melted()){
        cnt++;
        dfs(pos{0,0});
        disp();
    }
    cout << cnt;
    return 0;
}