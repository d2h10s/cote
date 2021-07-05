#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int Pd, Pg, den_d, num_d, den_g, num_g, gcd_d, gcd_g;
        long long N;
        scanf("%lld %d %d", &N, &Pd, &Pg);
        
        gcd_d = gcd(100, Pd);
        num_d = Pd / gcd_d;
        den_d = 100/gcd_d;
            
        if (Pd != 100 && Pg == 100){
            printf("#%d Broken\n", test_case);
            continue;
        }
        if (Pd != 0 && Pg == 0){
            printf("#%d Broken\n", test_case);
            continue;
        }
        if(num_d > N || den_d > N){
            printf("#%d Broken\n", test_case);
            continue;
        }
        printf("#%d Possible\n", test_case);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}