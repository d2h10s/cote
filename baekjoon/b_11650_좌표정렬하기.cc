#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, x, y;
    vector<pair<int, int>> v;
    scanf("%d", &n);
    v.reserve(n);
    while(n--){
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end(), [](auto a, auto b){
        if(a.first == b.first) return a.second < b.second;
        else return a.first < b.first;
    });
    for(auto iter = v.begin(); iter != v.end(); iter++)
        printf("%d %d\n", (*iter).first, (*iter).second);
}