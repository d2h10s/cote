#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>
using namespace std;
// stringstream 사용
int main() {
    unordered_map<string, char> map, result;
    vector<string> v;
    stringstream ss;
    int n, m;

    scanf("%d %d", &n, &m);
    map.reserve(n + m);

    for (int i = 0; i < n; i++) {
        char tmp[21];
        scanf("%s", &tmp);
        map[string(tmp)] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        char tmp[21];
        scanf("%s", &tmp);
        string temp = string(tmp);
        if (map.erase(temp)) {
            v.push_back(temp);
        }
    }
    sort(v.begin(), v.end(), [](string a, string b) {return a.compare(b) < 0; });
    ss << v.size() << '\n';
    for (auto s : v) {
        ss << s + '\n';
    }
    cout << ss.str();
}