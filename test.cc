#include <iostream>

void print(int a, int b= 3){
    std::cout << a << ' ' << b << std::endl;
}

int main(){
    print(1,3);
    print(1);
}