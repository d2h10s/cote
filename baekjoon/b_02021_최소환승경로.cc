#include <iostream>
#include <vector>

using namespace std;

class node{
    static int size;
public:
    vector<node*> prev, next;
    int name;
    node(){
        name=++size;
    }
};
int node::size=0;

int main(){
    int N, L, S, E, i, j;
    scanf("%d %d", &N, &L);
    vector<node> st(N);
    // cout << st.size();
    // for (i=0; i<st.size(); i++){
    //     cout << st[i].name << endl;
    // }
    for(i=0; i<L; i++){
        int prev = 0, cur;
        while(1){
            scanf("%d", &cur);
            if (cur == -1) break;

            if(prev){
                st[prev].next.push_back(&st[cur]);
                prev = cur;
            }
        }
    }
    scanf("%d %d", &S, &E);

    for(i=0; i<N; i++){
        for(j=0; j<st[i].prev.size();i++){
            printf("%d, "st[i]->prev[j]);
        }
    }
}