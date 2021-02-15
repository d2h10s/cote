#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ll min, max, cnt = 0;
    scanf("%lld %lld", &min, &max);
    ll square = sqrt(max) + 1;
    vector<bool> v(square + 1, 1), answer(max - min + 1, 1);
    vector<ll> prime;
    for (ll i = 2; i <= square; i++) {
        if (v[i]) {
            //printf("prime detected %5lld\n", i);
            prime.push_back(i * i);
            for (ll j = i + i; j <= square; j += i) {
                v[i] = 0;
            }
        }
    }
    int size = prime.size();
    for (ll i = min; i <= max; i++) {
        //printf("idx is %10lld\n", i);
        if (answer[i - min]) {
            bool isSquare = true;
            for (ll j = 0; j < size && prime[j] <= i; j++) {
                if (i % prime[j] == 0) {
                    for (ll k = i; k <= max; k += prime[j]) {
                        answer[k - min] = 0;
                    }
                    isSquare = false;
                    break;
                }
            }
            if (isSquare) cnt++;
        }
    }
    printf("%lld", cnt);
}