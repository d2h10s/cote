#include<iostream>
using namespace std;
int i, N, T[16], P[16], visited[16], M = 0;

void dfs(int now, int rem, int sum){
    if (now + T[now] - 1 > N || now > N || visited[now]) {
        M = M<sum? sum:M;
        return;
    }
    visited[now] = 1;
    if (rem < 1) {
        sum += P[now];
        rem = T[now];
    }
    for(int i = 1; now + i <= N; i++){
        dfs(now + i, rem - 1, sum);
        visited[now] = 0;
    }
}

int main(){
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        scanf("%d %d", T+i, P+i);
        //if(i + T[i] - 1 > N) T[i] = P[i] = 0;
    }
    for(i = 1; i <= N; i++) dfs(i, 0, 0);
    printf("%d", M);

}