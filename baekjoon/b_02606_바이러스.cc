#include <iostream>
#include <vector>
#include <stack>

using namespace std;

auto main()->int{
    int n, m, s, e, cur, cnt=0;
    vector<vector<int>> graph;
    vector<int> is_visited;
    stack<int> st;
    scanf("%d\n%d", &n, &m);
    graph.resize(n+1, vector<int>());
    is_visited.resize(n+1, 0);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &s, &e);
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    st.push(1);
    is_visited[0] = 1;
    
    while(!st.empty()){
        cur = st.top(); st.pop();
        if (!is_visited[cur]){
            cnt++;
            is_visited[cur]++;
            for (auto v : graph[cur]){
                st.push(v);
            }
        }
    }
    printf("\n%d", --cnt);
}