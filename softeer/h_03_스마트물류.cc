#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int i, n, k, cnt = 0;
    string line;
    cin >> n >> k >> line;
    
    for(int i = 0; i < n; i++){
        if(line[i] == 'P'){
            int is_valid = false;
            for(int j = i - k; j < n &&  j <= i+k; j++){
                if (j< 0) continue;
                if(line[j] == 'H'){
                        line[i] = line[j] = 'O';
                        cnt++;
                        break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}