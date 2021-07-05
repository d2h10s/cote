#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, i, j, flag = false;
        scanf("%d", &N);
        for(i = 1; i < 10; i++){
            for(j = 1; j < 10; j++){
                if (N == i*j){
                    flag = true;
                }
            }
        }
        if (flag) printf("#%d Yes\n",test_case);
        else printf("#%d No\n", test_case);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}