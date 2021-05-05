#include <iostream>
#include <array>
#include <stack>
#define hori 0
#define vert 1
#define diag 2
using namespace std;

struct pos{int x,y,pose;};
pos operator+(pos a, pos b){return pos{a.x+b.x,a.y+b.y, b.pose};}

int main(){
    pos dir[] = {{0,1,hori},{1,0,vert},{1,1,diag}};
    int i, j, N, cnt = 0;
    array<array<int, 16>, 16> map;
    stack<pos> s;

    scanf("%d", &N);
    for(i = 0; i < N; i++) for(j = 0; j < N; j++) scanf("%d", &map[i][j]);

    s.push(pos{0,1,hori});

    while(!s.empty()){
        pos now = s.top(); s.pop();
        if (now.x < 0 || now.y < 0 || now.x >= N || now.y >= N) continue;
        if (map[now.x][now.y] == 1) continue;
        if (now.x == N-1 && now.y == N-1) {
            cnt++;
            continue;
        }
        
        if (now.pose == hori){
            s.push(now+dir[hori]);
        }
        else if (now.pose == vert){
            s.push(now+dir[vert]);
        }
        else if (now.pose == diag){
            s.push(now+dir[hori]);
            s.push(now+dir[vert]);
        }
        bool can_go = true;
        for(i = 0; i < 3; i++){
            pos next = now+dir[i];
            if (next.x < 0 || next.y < 0 || next.x >= N || next.y >= N) {can_go = false; break;}
            if (map[next.x][next.y] == 1) {can_go = false; break;}
        }
        if(can_go) s.push(now+dir[diag]);
    }
    printf("%d", cnt);


}