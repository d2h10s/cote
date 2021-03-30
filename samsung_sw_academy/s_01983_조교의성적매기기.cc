#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    const char a[10][3] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	int test_case, T, N, K;
	scanf("%d", &T);
    float student[100];
	for(test_case = 1; test_case <= T; ++test_case)
	{
        scanf("%d %d", &N, &K);
        for(int i = 0; i < N; i++){
            int mid, fin, assign;
            scanf("%d %d %d", &mid, &fin, &assign);
            student[i] = mid*0.35+fin*0.45+assign*0.2;
        }
        int idx = 0;
        int cut = N/10 < 1? 1:N/10;
        for(int i = 0; i < N; i++){
            if(student[i] > student[K-1]) idx++;
        }
        printf("#%d %s\n", test_case, a[idx/cut]);
	}
	return 0;
}