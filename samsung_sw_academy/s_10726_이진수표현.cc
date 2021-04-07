#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N, M, i, cnt, mask;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case){
        printf("#%d ", test_case);
		scanf("%d %d", &N, &M);
        for(i = 0, mask = 1, cnt = 0; i < N; i++, mask <<= 1){
            if (M & mask) cnt++;
        }
        if(cnt == N) printf("ON\n");
        else printf("OFF\n");
	}
	return 0;
}