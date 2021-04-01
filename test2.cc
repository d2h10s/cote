#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char** argv)
{
    sqrt(3);
    int k = 11;
    float x = k;
    for(int i=0; i <5; i++){
        x = 0.5*(x+k/x);
        printf("%.10f\n", x);
    }
}