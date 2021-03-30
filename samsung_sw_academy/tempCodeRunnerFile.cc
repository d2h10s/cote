#include<iostream>
using namespace std;

typedef struct{float score; int idx;}grade;

void input(grade *student, int N){
    for(int i = 0; i < N; i++){
        int mid, fin, assign;
        cin >> mid >> fin >> assign;
        student[i].score = mid*0.35+fin*0.45+assign*0.2;
        student[i].idx = i;
    }
}
void insertion_sort(grade *student, int N){
    for(int i = 1; i < N; i++){
        int j = i;
        while(j > 0 && student[j-1].score > student[j].score){
            grade temp = student[j];
            student[j] = student[i];
            student[i] = temp;
            j--;
        }
    }
}
int main(int argc, char** argv)
{
    const char a[10][3] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	int test_case, T, N, K;
	//freopen("input.txt", "r", stdin);
	cin>>T;
    grade student[100];
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N >> K;
        K--;
        input(student, N);
        for(int i = 0; i < N; i++){
            printf("%d %f\n", student[i].idx, student[i].score);
        }

        insertion_sort(student, N);

        int cut = 10./N;
        for(int i = 0; i < N; i++){
            printf("%d %f\n", student[i].idx, student[i].score);
            if (student[i].idx == K) K = i;
        }
        printf("#%d %s\n", test_case, a[K/cut]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}