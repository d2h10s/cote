#include <stdio.h>
using namespace std;

int group[12], answer[6];

void dfs(int start, int depth, int k){
	if(depth == 6){
		for(int i = 0; i < 6; i++){
			printf("%d ", answer[i]);
		}
		printf("\n");
	}
	else{
		for(int i = start; i < k; i++){
			answer[depth] = group[i];
			dfs(i + 1, depth + 1, k);
		}
	}
}

int main() {
	int i, j, k = 1;
	while(1){
		scanf("%d", &k);
		if (!k) break;
		for(i = 0; i < k; i++) scanf("%d", &group[i]);
		dfs(0, 0, k);
		printf("\n");
	}
}