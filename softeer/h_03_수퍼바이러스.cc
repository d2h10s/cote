#include<iostream>
#include<unordered_map>
using namespace std;
const long long mod  = 1000000007;
unordered_map<int,long long> dp;
long long recur(long long p, long long n){
        if (n < 2) return p;
        dp[n/2] = recur(p, n/2)%mod;
        if (n%2==0) return dp[n/2]*dp[n/2]%mod;
        else return dp[n/2]*dp[n/2]%mod*p%mod;
}
int main(int argc, char** argv)
{
        long long k, p, n;
        scanf("%lld %lld %lld", &k, &p, &n);
        k = ((k % mod) * (recur(p, n*10) % mod)) % mod;
        cout << k;

 return 0;
}