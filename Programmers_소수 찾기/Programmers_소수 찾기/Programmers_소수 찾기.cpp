#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int dfs(vector<pair<int, bool>> number, int depth) {
    int i;
    static int level = 0;
    if (depth == level) {
        cout << endl;
        return 0;
    }
    for (i = 0; i < number.size(); i++) {
        if (!number[i].second) {
            cout << number[i].first;
            number[i].second = true;
            level++;
        }
        dfs(number, depth);
        number[i].second = false;
        level--;
    }
    return 0;
}

int solution(string numbers) {
    int i, qSize = numbers.size(), answer = 0;
    static int tt;
    vector<pair<int, bool>> number, combi;
    for (i = 0; i < qSize; i++) number.push_back(make_pair(numbers[i] - '0', 0));
    for (i = 1; i <= qSize; i++) {
        dfs(number, i);
    }
    return answer;
}

int main() {
    solution("314");
}