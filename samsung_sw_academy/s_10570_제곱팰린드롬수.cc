#include<iostream>

using namespace std;

bool dp[1000];

bool isPelin(int number){
    int cnt=0, i, j, size = 1, temp = number, front, back, exp = 1;
    while(temp/=10) size++, exp *= 10;
    if(size==1) return true;
    for(i=0, j=size-1;i<j;i++,j--){
        front = number / exp;
        back = number % 10;
        //printf("n=%d, f=%d, b=%d\n", number, front, back);
        number = number % exp / 10;
        exp /= 10;

        if (front != back) return false;
    }
    return true;
}

int main(int argc, char** argv)
{
	int test_case;
	int T, A, B, i, cnt;
	freopen("input.txt", "r", stdin);

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cnt = 0;
        for(i = 0; i < 1000; i++) *(dp+i) = 0;
        scanf("%d %d", &A, &B);
        i = 0;
        while(i*i<A)i++;
        int st = i;
        for(i--; i*i <= B; i++){
            dp[i] = isPelin(i);
            dp[i*i] = isPelin(i*i);
        }
        for(i = st; i*i <= B; i++){
            //printf("check %d, %d, %d\n", i, dp[i], dp[i*i]);
            if (dp[i] && dp[i*i]) cnt++;
        }
        printf("#%d %d\n",test_case, cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}