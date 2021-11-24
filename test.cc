#include <iostream>
#include <vector>
#include<cassert>
using namespace std;

int total_cost = 100000;
string ans;

void swap(string &s, int i, int j){
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
}

void dfs(int N, string cars, int level, vector<bool> iscomplete, int cost){
    int cnt = 0;
    for(int i = 0; i < N; i++) cnt+=iscomplete[i];
    if (cnt==N){
        total_cost = cost<total_cost? cost:total_cost;
        ans=cars;
        return;
    }
    if (level < N && !iscomplete[level]){
        if(cars[level] != cars[level+1]){
            int idx = cars.find(cars[level], level+1);
            swap(cars, level+1, idx);
            cost += (idx-level-1)*2;
        }
        iscomplete[level] = true;
        for(int i = 0; i < N; i++){
            dfs(N, cars, i, iscomplete, cost);
        }
    }
}

string solution(int N, string cars){
    vector<bool> iscomplete(N);
    for(int i = 0; i < N; i++){
        dfs(N, cars, i, iscomplete, 0);
    }
    return ans;
}

int main(){
    string answer = solution(4, "DBBD");
    assert (answer == "DDBB" || answer == "BBDD");
}