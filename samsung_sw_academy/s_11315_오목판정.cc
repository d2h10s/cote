#include<iostream>
using namespace std;

char board[20][20];
int N;

int dfs(int x, int y, int dx, int dy, int cnt){
    if (x < 0 || x > N - 1 || y < 0 || y > N - 1) return 0;
    if (board[x][y] == 'o') cnt++;
    else return 0;
    if (cnt >= 5) return 1;
    if (dfs(x + dx, y + dy, dx, dy, cnt)) return 1;
    else return 0;
}
int main(int argc, char** argv)
{
	int test_case;
	int T, i, j, k, l;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case){
        cin >> N;
        getchar();
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++)
                board[i][j] = getchar();
            getchar();
        }
        
        bool isOmok = false;

        for(i = 0; i < N && !isOmok; i++){
            for(j = 0; j < N && !isOmok; j++){
                if(board[i][j] == 'o'){
                    if (dfs(i, j, 0, 1, 0) || dfs(i, j, 1, 1, 0) || dfs(i, j, 1, 0, 0) || dfs(i, j, 1, -1, 0)) isOmok = true;
                }
            }
        }
        printf("#%d ", test_case);
        if (isOmok) printf("YES\n");
        else printf("NO\n");
	}

	return 0;
}