#include <stdio.h>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> map;
    int n, m, tmp;
    scanf("%d", &n);
    map.reserve(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if (!map.count(tmp))
            map[tmp] = 1;
        else
            map[tmp]++;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &tmp);
        printf("%d ", map.count(tmp)? map[tmp]:0);
    }
}