#include<iostream>

using namespace std;

int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}

int main(int argc, char** argv)
{
	int test_case,T,Pd,Pg,_gcd,num;
    long long N;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        scanf("%lld %d %d", &N, &Pd, &Pg);
        
       _gcd = gcd(100, Pd);
        num = 100/_gcd;
        
        if ((Pd != 100 && Pg == 100) || (Pd != 0 && Pg == 0)||(num>N)){
            printf("#%d Broken\n", test_case);
        }
       else printf("#%d Possible\n", test_case);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}