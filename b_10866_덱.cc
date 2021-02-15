#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    int n, tmp;
    string com;
    scanf("%d", &n);
    while(n--){
        cin >> com;
        if (com == "push_front"){
            cin >> tmp;
            d.push_front(tmp);
        }
        else if (com == "push_back"){
            cin >> tmp;
            d.push_back(tmp);
        }
        else if (com == "pop_front"){
            if(d.size()){
                printf("%d\n",d.front());
                d.pop_front();
            }
            else printf("-1\n");
        }
        else if (com == "pop_back"){
            if(d.size()){
                printf("%d\n",d.back());
                d.pop_back();
            }
            else printf("-1\n");
        }
        else if (com == "size"){
            printf("%d\n",d.size());
        }
        else if (com == "empty"){
            printf("%d\n",d.empty());
        }
        else if (com == "front"){
            if(d.size())
                printf("%d\n",d.front());
            else
                printf("-1\n");
        }
        else if (com == "back"){
            if(d.size())
                printf("%d\n",d.back());
            else
                printf("-1\n");
        }
    }
}