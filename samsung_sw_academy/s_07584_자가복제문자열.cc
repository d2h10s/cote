#include<iostream>

using namespace std;

string f(string s){
    for(auto it = s.begin(); it != s.end(); it++){
        if (*it == '1') *it = '0';
        else *it = '1';
    }
    return s;
}

string g(const string& s){
    string new_s;
    for(auto it = s.end() - 1; it >= s.begin(); it--){
        new_s += *it;
    }
    return new_s;
}

int main(int argc, char** argv)
{
	int t;
	int T, K;
    string s = "0";
    int cnt = 0;
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	for(t = 1; t <= T; ++t){
		scanf("%d", &K);
        K--;
        while(s.length() <= K){
            s += "0" + f(g(s));
            cnt++;
        }
        printf("#%d %c\n", t, s[K]);
	}
    cout << s;
    printf("cnt = %d\n", cnt);
	return 0;
}