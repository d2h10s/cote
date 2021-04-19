#include<iostream>

using namespace std;
w
int main(int argc, char** argv)
{
	int t, T, K, result;
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	for(t = 1; t <= T; ++t){
		scanf("%d", &K);
        K--;
        if (K%4 == 0) result = '0';
        else if (K%2 == 0) result = '1';
        else
        printf("#%d %c\n", t, result);
	}
    cout << s;
    printf("cnt = %d\n", cnt);
	return 0;
}