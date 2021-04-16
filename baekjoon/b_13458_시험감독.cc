#include <iostream>
using namespace std;

int N, A[1000000+1], B, C;
int main(){
    int i;
    scanf("%d", &N);
    for(i = 0 ; i < N; i++) scanf("%d", A + i);
    scanf("%d %d", &B, &C);
    long long sub = 0;
    for(i = 0; i < N; i++){
        *(A+i) -= B;
        if (*(A+i) > 0) sub += (*(A+i))/C + ((*(A+i))%C!=0? 1:0);
    }
    printf("%lld", N + sub);
}