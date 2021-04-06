#include<iostream>

using namespace std;

int grade[2000][2000], score_board[2000];

int main(int argc, char** argv)
{
	int T, N, M, P, i, j, scores, cnt, rank1, rank2, rank3;
	const int score = 0, solved_num = 1;
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d %d %d", &N, &M, &P);
		getchar();
		P--;
		for (i = 0; i < M; i++) score_board[i] = 0;
		for (i = 0; i < N; i++){
			for (j = 0; j < M; j++) {
				grade[i][j] = getchar() - '0';
				getchar();
				if (!grade[i][j]) score_board[j]++;
			}
		}
		for (i = 0; i < N; i++) {
			scores = 0, cnt = 0;
			for (j = 0; j < M; j++) {
				if (grade[i][j]) {
					scores += grade[i][j] * score_board[j];
					cnt++;
				}
			}
			grade[i][score] = scores;
			grade[i][solved_num] = cnt;
		}
		rank1 = rank2 = rank3 = 0;
		for (i = 0; i < N; i++) {
			if (grade[P][score] < grade[i][score]) rank1++;
			else if (grade[P][score] == grade[i][score]) {
				if (grade[P][solved_num] < grade[i][solved_num]) rank2++;
				else if (grade[P][solved_num] == grade[i][solved_num] && P > i) rank3++;
			}
		}
		int rank = rank1 + rank2 + rank3 + 1;
		printf("#%d %d %d\n", test_case, grade[P][score], rank);
	}
	return 0;
}