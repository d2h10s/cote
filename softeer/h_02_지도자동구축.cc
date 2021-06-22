#include<iostream>


using namespace std;

int main(int argc, char** argv)
{
        int N;
        cin >> N;
        int result  = (1 << (N-1))*2+1;
        cout  << result*result;
 return 0;
}