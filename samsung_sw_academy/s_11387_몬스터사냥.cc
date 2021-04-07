#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, D, L, N;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case){
		scanf("%d %d %d", &D, &L, &N);
        long long sum_damage = 0;
        for(int n = 0; n < N; n++)
            sum_damage += D+n*L*D/100;
        printf("#%d %lld\n", test_case, sum_damage);
	}
	return 0;
}