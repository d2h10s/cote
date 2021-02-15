#include <stdio.h>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int n, c, tmp;
    vector<int> std;
    unordered_map<int,char> map;
    scanf("%d %d", &n, &c);
    std.reserve(n);
    map.reserve(c);
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp);
        std.push_back(tmp);
    }
    for(int i = 0; i < std.size(); i++){
        for(int j = 0; j < std.size(); j++){
            if(i == j) continue;
            if(std[j] % std[i] == 0) {
                if(i >= j) i--;
                std.erase(std.begin()+j--);
            }
        }
    }
    for(int i = 1; i <= c; i++){
        int isEnd = true;
        for(int j = 0; j < std.size(); j++){
            if(std[j] == 1){
                printf("%d", c);
                return 0;
            }
            if(std[j] <= c / i) map[std[j]*i] = 1, isEnd=false;
            //else std.erase(std.begin()+j--);
        }
        if (isEnd) break;
    }
    printf("%ld", map.size());
}