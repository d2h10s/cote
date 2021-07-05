#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	//freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sets[26]{0}, cnt = 0, answer = 0;
        string s;
        cin >> s;
		for(char c:s){
            sets[c-'A']++;
        }
        for(int i = 0; i < 23; i++){
            if (sets[i] != 0) cnt++;
            if (sets[i] == 2) answer++;
        }
        if (cnt==2 && answer == 2) printf("#%d Yes\n", test_case);
        else  printf("#%d No\n", test_case);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}