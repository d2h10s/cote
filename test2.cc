#include<iostream>
using namespace std;

float sqrt(int k){
    float x = k;
    for(int i=0; i <5; i++){
        x = 0.5*(x+k/x);
        printf("%.10f\n", x);
    }
}
int main(int argc, char** argv)
{
    int k = 11;
    
}