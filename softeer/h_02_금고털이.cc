#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct metal{int M; int P;};

vector<metal> dat;

int main(int argc, char** argv)
{
        ios::sync_with_stdio(false);
        cin.tie(nullptr), cin.tie(nullptr);
        int N, W, M, P;
        long long price = 0;
        cin >> W >> N;
        
        for(int i = 0; i < N; i++) {
                cin >> M >> P;
                dat.emplace_back(metal{M, P});
        }
        sort(begin(dat), end(dat), [](auto a, auto b){return a.P > b.P;});
        for(auto item:dat){
                if (W < 1) break;
                if(item.M <= W){
                        price += item.M * item.P;
                        W -= item.M;
                }
                else{
                        price += item.P * W;
                        W = 0;
                }
        }
        cout << price;
        return 0;
}