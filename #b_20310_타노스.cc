#include <iostream>
#include <vector>
#define x first
#define y second
#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<pair<int, int>> zero, one;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') zero.emplace_back(i, 0);
        else one.emplace_back(i, 1);
    }
    int n = zero.size(), m = one.size();
    for(int i=0; i<n/2; i++) zero.pop_back();
    for(int i=0; i<m/2; i++) one.pop_front();
    deque<p> res;
    merge(all(zero), all(one), back_inserter(res));
    for(auto i : res) cout << i.y;
}