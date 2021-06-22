#include<iostream>
#include<vector>
#define MAX_SIZE 100
#define B 7

using namespace std;

int N, M, map[MAX_SIZE][MAX_SIZE]{ 0 }, temp_map[MAX_SIZE][MAX_SIZE]{ 0 }, visited[MAX_SIZE][MAX_SIZE]{ 0 };

struct pos {
    int r, c;
    pos operator+(pos ref) {
        return pos{ r + ref.r,c + ref.c };
    }
    bool is_out_of_range() {
        return r < 0 || c < 0 || r >= N || c >= M;
    }
};

pos dir[] = { pos{0,-1}, pos{0, 1}, pos{-1,0}, pos{1,0} };

bool is_all_melted() {
    int cnt = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 1) cnt++;
        }
    if (cnt) return false;
    else return true;
}

bool is_touched(pos now) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        pos temp = now + dir[i];
        if (temp.is_out_of_range()) continue;
        if (map[temp.r][temp.c] == B) cnt++;
    }
    return cnt >= 2 ? true : false;
}

void disp() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%2d ", map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void dfs(pos now) {
    if (now.is_out_of_range()) return;
    if (visited[now.r][now.c]) return;
    visited[now.r][now.c] = 1;

    if (map[now.r][now.c] == 1 && is_touched(now)) {
        temp_map[now.r][now.c] = B;
        return;
    }
    for (int i = 0; i < 4; i++)
        dfs(now + dir[i]);
}

void init_zero(pos now) {
    if (now.is_out_of_range()) return;
    if (visited[now.r][now.c]) return;
    visited[now.r][now.c] = 1;
    if (temp_map[now.r][now.c] != 1 ) temp_map[now.r][now.c] = B;
    else return;
    for (int i = 0; i < 4; i++)
        init_zero(now + dir[i]);
}

void copy_map() {
    for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) {
            map[i][j] = temp_map[i][j];
            visited[i][j] = 0;
    }
}

int main(int argc, char** argv)
{
        scanf("%d %d", &N, &M);
        int cnt = 0;
        for (int i = 0; i < N; i++) for (int j = 0; j < M; j++)
                scanf("%d", &temp_map[i][j]);
        copy_map();
        //disp();
        while (!is_all_melted()) {
                init_zero(pos{0,0});
                copy_map();
                dfs(pos{ 0,0 });
                copy_map();
                //disp();
                cnt++;
        }
        cout << cnt;
        return 0;
}