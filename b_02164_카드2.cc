#include <stdio.h>
#include <deque>
using namespace std;

int main(){
    int n;
    deque<int> d;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) d.push_back(i);
    while(d.size() != 1){
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }
    printf("%d", d.back());
    
}