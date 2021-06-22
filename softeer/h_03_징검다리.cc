#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int i, j, N, cnt, cur, M = 0, start;
vector<int> w, v;

int main(int argc, char** argv) {

    scanf("%d", &N);
    int answer = 0;
    v.resize(N, 1);
    w.resize(N, 0);
    for (i = 0; i < N; i++)
        scanf("%d", &w[i]);
    for (i = 0; i < N; i++) {
        int M = 0;
        for (j = i - 1; j >= 0; j--) {
            if (w[i] > w[j]) {
                if (M < v[j]) M = v[j];
            }
        }
        v[i] = M + 1;
        if (answer < v[i]) answer = v[i];
    }
    cout << answer;
    return 0;
}