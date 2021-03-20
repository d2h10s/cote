#include<iostream>
using namespace std;

int prices[1000000];

int max(int s, int e){
    int idx = s;
    for(int i = s; i < e; i++)
        if (*(prices + idx) < *(prices + i))
            idx = i;
    return idx;
}

int main(int argc, char** argv){
	int i, test_case, T, N;
    freopen("input.txt", "r", stdin);
	cin>> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N;
    	long long int num_stock = 0, balance = 0;
        for (i = 0; i < N; i++) cin >> *(prices+i);
        int idx = max(0, N);
        
        for (i = 0; i < N; i++) {
            if (idx <= i) {
                idx = max(i + 1, N);
                balance +=  *(prices + i) * num_stock;
                num_stock = 0;
            }
            else {
                num_stock++;
                balance -= *(prices + i);
            }
        }
        if(num_stock) balance += prices[i] * num_stock;
        printf("#%d %lld\n", test_case, balance);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}