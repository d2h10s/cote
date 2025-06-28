#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 0; tc < t; tc++){
		int num;
		scanf("%d", &num);
		int dp[3]={num};
		for(int i = 2; i <= 3; i++){
			int a = num-1, b = ceil(num/2.0);
			dp[1] = (b-a+1)*(a+b)/2;
			while(1){
				int sum = j*i
			}
			//printf("%d\n",dp[i]);
		}
	}
}