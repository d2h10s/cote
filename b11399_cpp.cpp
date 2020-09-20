#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int i, size, tmp = 0, sum = 0;
    scanf("%d", &size);
    vector<int> time(size, 0);
    for(i = 0; i < size; i++){
        scanf("%d", &time[i]);
    }
    sort(time.begin(), time.end());
    sum += time.at(0);
    for(i = 0; i <size - 1; i++){
        tmp += time.at(i);
        sum += tmp + time.at(i + 1);
    }
    cout << sum;
}