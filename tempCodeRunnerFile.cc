#include <stdio.h>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::vector<int> v;
    scanf("%d", &n);
    for(int i = 666; v.size() < n; i++){
        std::cout << i << endl;
        int len = 0;
        for(int temp = i; temp > 0; temp /= 10) if(temp / 10 == 6) len++;
        if(len == 3) v.push_back(i);
    }
    printf("%d", v.back());
}