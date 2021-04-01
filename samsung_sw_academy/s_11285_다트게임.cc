#include<iostream>
using namespace std;
     
int main(int argc, char** argv){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int test_case, T, N, x, y, p, score, i, d, d2;
    //freopen("input.txt", "r", stdin);
    cin >> T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        score = 0;
        cin >> N;
        for(i = 0; i < N; i++){
            cin >> x >> y;
            d2= x*x+y*y;
            for(d = 20; d<=200; d+=20)
                if(d*d >= d2)
                    break;
            score += 11-d/20;
        }
        cout << '#' << test_case << ' ' << score << '\n';
    }
    return 0;
}