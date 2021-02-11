#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int dfs(vector<pair<int, bool>> number, int depth, int& cnt){
    int i;
    static vector<int> numbers, answer(1,0);
    static int level = 0;
    if (depth == level) {
        int tmp = 0, size = numbers.size();
        for(i = 0; i < size; i++){
            tmp += numbers[i]*uint(pow(10,size - 1 - i));
        }
        for(auto it = answer.begin(); it != answer.end(); it++){
            if(*it == tmp) return 0;
        }
        answer.push_back(tmp);
        cout << tmp;
        if(tmp < 2) {
            cout << "은 소수가 아닙니다.\n";
            return 0;
        }
        if(tmp == 2){
            cout << "은 소수입니다.\n";
            return ++cnt;
        }
        for(i = 2; i < sqrt(tmp) + 1; i++){
            if(tmp % i == 0){
               cout << "은 소수가 아닙니다.\n";
                return 0;
            }
        }
        cout << "은 소수입니다.\n";
        return ++cnt;
    }
    for(i = 0; i < number.size(); i++){
        if(!number[i].second){
            numbers.push_back(number[i].first);
            number[i].second = true;
            level++;
        }
        else continue;
        dfs(number, depth, cnt);
        number[i].second = false;
        numbers.pop_back();
        level--;
    }
    return 0;
}

int solution(string numbers) {
    int i, qSize = numbers.size(), answer = 0;
    static int tt;
    vector<pair<int,bool>> number, combi;
    for(i = 0; i < qSize; i++) number.push_back(make_pair(numbers[i] - '0', 0));
    for(i = 1; i <= qSize; i++){
        dfs(number, i, answer);
    }
    return answer;
}

int main(){
    string st;
    cin >> st;
    cout << solution(st);
}