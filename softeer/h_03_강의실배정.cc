#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct times{int s, e;};

int main(int argc, char** argv)
{
        int i, n, cnt = 0, e = 0;
        scanf("%d", &n);
        vector<times> v;
        v.resize(n, times{0,0});
        for(i = 0; i < n; i++){
                scanf("%d %d", &v[i].s, &v[i].e);
        }
        sort(v.begin(), v.end(), [](auto a, auto b){
                if(a.e == b.e) return a.s > b.s;
                else return a.e < b.e;
        });
        for(auto vv : v){
                if (vv.s >= e){
                        cnt++;
                        e = vv.e;
                }
        }
        cout << cnt;
 return 0;
}