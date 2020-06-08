#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<float, float>> fail(N + 1);
    bool flag = 1;
    int i, j, mem, size = stages.size();
    mem = size;
    for (i = 1; i < N; i++) {
        int cnt = 0;
        fail[i].second = stages.size();
        for (j = 0; j < stages.size(); j++) {
            if (flag && N == stages[j]) fail[N].first++;
            if (i == stages[j]) {
                cnt++;
                stages.erase(stages.begin() + j--);
            }
        }
        if (!cnt) fail[i].second = 0;
        flag = 0;
        fail[i].first = cnt;
        mem -= cnt;
    }
    fail[N].second = mem;
    for (i = 0; i < N + 1; i++) {
        if (!fail[i].second) fail[i].first = 0;
        else fail[i].first /= fail[i].second;
        fail[i].second = i;
    }
    fail.erase(fail.begin());
    sort(fail.begin(), fail.end(), [](pair<float, float> a, pair<float, float> b) {return a.first > b.first; });
    for (i = 0; i < N; i++)
        answer.push_back(fail[i].second);

    cout << "result: ";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];
        if (i != answer.size() - 1) cout << ", ";
    }
    cout << "\n\n스테이지     실패율\n";
    for (i = 0; i < answer.size(); i++) {
        cout << "   " << fail[i].second << "\t\t" << fail[i].first << endl;
    }
    return answer;
}

int main() {
    vector<int> stages{ 1,1,3,1,2,7 }, answer;
    answer = solution(7, stages);
}
