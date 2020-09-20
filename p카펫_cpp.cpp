#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int red) {
    vector<int> answer;
    int i, range = (brown - 4) / 2, width , height;

    for(i = 1; i < range; i++){
        height = i;
        width = range - i;
        if( width * height == red){
            answer.push_back(width + 2);
            answer.push_back(height + 2);
            cout << width + 2 << " " << height + 2;
            return answer;
        }
    }
}