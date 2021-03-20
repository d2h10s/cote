#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct member{
    int date;
    int age;
    string name;
};

int main(){
    int n, age, time = 0;
    string name;
    scanf("%d", &n);
    vector<member> v;
    v.reserve(n);
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        member tmp = {time++, age, name};
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), [](auto a, auto b){
        if(a.age == b.age){
            return a.date < b.date;
        }
        else return a.age < b.age;
    });
    for(auto x:v){
        cout << x.age <<' ' << x.name << '\n';
    }
}