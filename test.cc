#include <iostream>
using namespace std;
int main(){
    string s;
    s += "gg";
    for (char c : s){
        cout << c;
    }
    cout << s.length();
}