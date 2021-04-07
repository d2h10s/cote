#include<iostream>
using namespace std;

string& g(string& s){
    for(auto it = s.begin(); it != s.end(); it++){
        if (*it == '1') *it = '0';
        else *it = '1';
    }
    return s;
}

string f(const string& s){
    string new_s;
    for(auto it = s.end() - 1; it >= s.begin(); it--){
        new_s += *it;
    }
    return new_s;
}

int main(int argc, char** arg){
    string s = "";
    cout << f(s);
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}