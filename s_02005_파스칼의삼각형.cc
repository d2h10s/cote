#include<iostream>

using namespace std;


int main(int argc, char** argv)
{
	int test_case;
	int i, j, T, end;
    int a[1000]{1};
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> end;
        printf("#%d\n1\n", test_case);
        for(i = 1 ; i < end; i++){
            int start = i * (i + 1) / 2;
            int pre_level = (i - 1) * i / 2;
            a[start] = 1;
            printf("%d ", a[start]);
            for(j = 0; j < i - 1; j++){
                a[start + j+1] = a[pre_level + j] + a[pre_level + j + 1];
                printf("%d ", a[start + j+1]);
            }
            a[(i+1)*(i+2)/2-1] = 1;
            printf("%d\n", a[(i+1)*(i+2)/2-1]);
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}