#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n, tmp;
    string com;
    scanf("%d", &n);
    while(n--){
        cin >> com;
        if (com == "push"){
            cin >> tmp;
            s.push(tmp);
        }
        else if (com == "pop"){
            if(s.size()){
                printf("%d\n",s.top());
                s.pop();
            }
            else printf("-1\n");
        }
        else if (com == "size"){
            printf("%d\n",s.size());
        }
        else if (com == "empty"){
            printf("%d\n",s.empty());
        }
        else if (com == "top"){
            if(s.size())
                printf("%d\n",s.top());
            else
                printf("-1\n");
        }
    }
}