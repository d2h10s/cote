#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
        int prev, N, down = 0;
        cin >> prev;
        for(int i = 0; i < 7; i++){
                cin >> N;
                if (prev - N == 1) down++;
                prev = N;
        }
        if(down == 7) cout << "descending";
        else if(down == 0) cout << "ascending";
        else cout << "mixed";
 return 0;
}