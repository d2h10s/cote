#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    vector<string> serial;
    cin >> n;
    serial.reserve(n);
    for(int i = 0; i < n; i++){
        cin >> s;
        serial.push_back(s);
    }
    sort(serial.begin(), serial.end(), [](string a, string b){
        if (a.length() == b.length()){
            int sum_a = 0, sum_b = 0;
            for(int i = 0; i < a.length(); i++){
                if(a[i] >= '0' && a[i] <= '9')
                    sum_a += a[i] - '0';
                if(b[i] >= '0' && b[i] <= '9')
                    sum_b += b[i] - '0';
            }
            if(sum_a == sum_b)
                return a.compare(b) < 0;
            else
                return sum_a < sum_b;
        }
        else
            return a.length() < b.length();
    });
    for(string c:serial){
        cout << c << endl;
    }
}