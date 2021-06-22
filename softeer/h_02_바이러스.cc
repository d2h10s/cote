#include<iostream>
#define mod 1000000007

using namespace std;

int main(int argc, char** argv)
{
        int K, P, N;
        scanf("%d %d %d", &K, &P, &N);
        long long answer = K;
        for(int i = 0; i < N; i++){
                answer = (answer * (P % mod)) % mod;
        }
        printf("%d", answer);
 return 0;
}