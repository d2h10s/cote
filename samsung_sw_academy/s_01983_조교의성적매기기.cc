#include<iostream>
using namespace std;

typedef struct{float score; int num;}grade;

int main(int argc, char** argv)
{
    const char a[10][3] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	int test_case;
	int T;
	//freopen("input.txt", "r", stdin);
	cin>>T;
    grade stu[100];
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, K;
        cin >> N >> K;
        for(int i = 0; i < N; i++){
            int mid, fin, ass;
        	cin >> mid >> fin >> ass;
            stu[i].score = mid*0.35+fin*0.45+ass*0.2;
            stu[i].num = i;
        }
        for(int i = 0; i < N; i++){
            printf("%d %f\n", stu[i].num, stu[i].score);
            //if (stu[i].num == K) K = i;
        }
        for(int i = 1; i < N; i++){
            int j = i;
            while(j > 0 && stu[j-1].score > stu[j].score) j--;
            
            if(i != j){
                grade temp = stu[j];
                stu[j] = stu[i];
                stu[i] = temp;
            }
        }
        int cut = 10./N;
        int gg = 1;
        for(int i = 0; i < N; i++){
            printf("%d %f\n", stu[i].num, stu[i].score);
            //if (stu[i].num == K) K = i;
        }
        printf("#%d %s\n", test_case, a[K%cut]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}