#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
        int i, n, m, w, a, b, cnt = 0;
        vector<vector<int>> v;
        vector<int> weight;
        scanf("%d %d", &n, &m);
        v.resize(n+1, vector<int>());
        weight.resize(n+1);
        for(i = 0; i < n; i++) scanf("%d", &weight[i+1]);
        for(i = 0; i < m; i++){
                scanf("%d %d", &a, &b);
                v[a].emplace_back(b);
                v[b].emplace_back(a);
        }

        for(i = 1; i <= n; i++){
                bool is_king = true;
                for(int member:v[i]){
                        if(weight[i] <= weight[member]){
                                is_king = false;
                                break;
                        }
                }
                if (is_king) cnt++;
        }
        printf("\n%d", cnt);
        return 0;
}