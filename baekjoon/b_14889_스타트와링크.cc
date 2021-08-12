#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int>> result;
vector<bool> visited;

void dfs(int idx, vector<int> numbers, int r, vector<int> temp){
    if (idx >= result.size()) return;
    if (temp.size() == r) result.push_back(temp)
}

vector<vector<int>> cb(vector<int> numbers, int r){
    
}

int main(){
    int n, buf;
    vector<vector<int>> M;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        vector<int> buf(n);
        for(int j = 0; j < n; j++){
            scanf("%d", &buf[j]);
        }
        M.push_back(buf);
    }
    visited.resize(n, false);
}