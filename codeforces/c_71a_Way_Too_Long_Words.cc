#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
            s =  s[0] + to_string(s.size()-2) +s[s.size()-1];
        cout << s << endl;
    }
}