#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
        int i, n, k, a, b;
        vector<int> v;
        scanf("%d %d", &n, &k);
        v.resize(n, 0);
        for(i = 0; i < n; i++) scanf("%d", &v[i]);
        while(k-->0){
                double grade = 0;
                scanf("%d %d", &a, &b);
                for(i = a-1; i < b; i++) grade += v[i];
                printf("%.2f\n", grade/(b-a+1));
        }
 return 0;
}