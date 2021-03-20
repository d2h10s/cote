#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int dfs(vector<pair<int, bool>> number, int depth){
    int i;
    static vector<int> numbers;
    static int level = 0;
    if (depth == level) {
        for(auto it = numbers.begin(); it != numbers.end(); it++){
            printf("%d ", *it);
        }
        printf("\n");
        return 0;
    }
    for(i = 0; i < number.size(); i++){
        if(!number[i].second){
            numbers.push_back(number[i].first);
            number[i].second = true;
            level++;
        }
        else continue;
        dfs(number, depth);
        number[i].second = false;
        numbers.pop_back();
        level--;
    }
    return 0;
}

int main(){
    int i, n, m;
    vector<pair<int,bool>> number;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++){
        number.push_back(make_pair(i,0));
    }
    dfs(number, m);

}