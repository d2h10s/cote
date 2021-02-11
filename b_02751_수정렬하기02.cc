#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int i, size;
    scanf("%d", &size);
    vector<int> numbers(size,0);
    for(i = 0; i<size;i++){
        scanf("%d", &numbers[i]);
    }
    sort(numbers.begin(), numbers.end());
    for(i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }
}