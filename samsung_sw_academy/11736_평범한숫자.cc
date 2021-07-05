
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N, set[20], cnt = 0;
        scanf("%d" ,&N);
        for(int i = 0; i < N; i++) scanf("%d", set+i);
        for(int i = 1; i < N-1; i++){
            if ((set[i-1] < set[i] && set[i] < set[i+1]) || (set[i-1] > set[i] && set[i] > set[i+1])) cnt++;
        }
        printf("#%d %d\n", test_case, cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}