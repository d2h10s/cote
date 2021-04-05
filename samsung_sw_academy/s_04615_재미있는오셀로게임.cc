#include<iostream>
using namespace std;

typedef enum { black = 1, white = 2 }col;

int board[9][9]{ 0 }, N, M, flip_cnt, b_w;

void disp() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			cout << board[i][j] << "  ";
		cout << "\n";
	}
	cout << "\n";
}

void init() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) for (int j = 1; j <= N; j++) board[i][j] = 0;
	board[N / 2][N / 2] = white;
	board[N / 2][N / 2 + 1] = black;
	board[N / 2 + 1][N / 2] = black;
	board[N / 2 + 1][N / 2 + 1] = white;
}

int flip(int now_x, int now_y, int dx, int dy) {
	if (now_x < 1 || N < now_x || now_y < 1 || N < now_y) return 0;
	if (!board[now_x][now_y]) return 0;
	if (board[now_x][now_y] == b_w) return 1;
	if (flip(now_x + dx, now_y + dy, dx, dy)) {
		board[now_x][now_y] = b_w;
		return 1;
	}
	else return 0;
}
int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	//freopen("sample_input.txt", "r", stdin);

	int T, x, y, i, j, k;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		init();
		for (i = 0; i < M; i++) {
			cin >> x >> y >> b_w;
			board[x][y] = b_w;
			for (j = -1; j < 2; j++) { for (k = -1; k < 2; k++) {
					if (j || k) flip(x + j, y + k, j, k);
				}
			}
			//disp();
		}

		int b = 0, w = 0;
		for (i = 1; i <= N; i++) {
			for (j = 1; j <= N; j++) {
				if (board[i][j] == 1) b++;
				else if (board[i][j] == 2) w++;
			}
		}
		printf("#%d %d %d\n", test_case, b, w);
	}
	return 0;
}