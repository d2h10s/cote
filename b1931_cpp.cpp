#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int i, j, size, tmp1, tmp2, flag, cnt= 0;
    scanf("%d", &size);
    vector<bool> time(INT_MAX, 0);
    vector<vector<int>> meeting(size, vector<int> (3,0));
    for(i = 0; i < size; i++){
        scanf("%d %d", &tmp1, &tmp2);
        meeting[i][0] = tmp2-tmp1;
        meeting[i][1] = tmp1;
        meeting[i][2] = tmp2;
    }
    sort(meeting.begin(), meeting.end());
    for(j = 0; j < size; j++){
        flag = 0;
        for(i = meeting[j][1]; i <= meeting[j][2]; i++){
            if(time[i]){
                flag = 1;
                break;
            }
        }
        if(!flag){
            cnt++;
            for(i = meeting[j][1]; i <= meeting[j][2]; i++){
                time[i] = 1;
            }
        }
    }
    cout << cnt;
}