#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n, tmp;
    string com;
    scanf("%d", &n);
    while(n--){
        cin >> com;
        if (com == "push"){
            cin >> tmp;
            q.push(tmp);
        }
        else if (com == "pop"){
            if(q.size()){
                printf("%d\n",q.front());
                q.pop();
            }
            else printf("-1\n");
        }
        else if (com == "size"){
            printf("%d\n",q.size());
        }
        else if (com == "empty"){
            printf("%d\n",q.empty());
        }
        else if (com == "front"){
            if(q.size())
                printf("%d\n",q.front());
            else
                printf("-1\n");
        }
        else if (com == "back"){
            if(q.size())
                printf("%d\n",q.back());
            else
                printf("-1\n");
        }
    }
}