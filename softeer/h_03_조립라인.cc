#include<iostream>
using namespace std;

#define A 0
#define B 1

int taI[1001], tbI[1001], tabM[1001], tbaM[1001];

int main(int argc, char** argv)
{
    int i, j, k, n, now=0;
    long long time = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n-1; i++)
        scanf("%d %d %d %d", taI+i, tbI+i, tabM+i, tbaM+i);
    scanf("%d %d", taI + n-1, tbI + n-1);
    
    if (taI[0] < tbI[0]){
        time += taI[0];
        now = A;
    }
    else {
        time += tbI[0];
        now = B;
    }
    printf("select %c path and now is %lld\n",now==A? 'A':'B', time);

    for(i = 0; i < n-1; i++){
        if (now==A){
            if (tbI[i+1] + tabM[i] < taI[i+1]){
                now = B;
                time += tbI[i+1] + tabM[i];
            }
            else{
                now = A;
                time += taI[i+1];
            }
        }
        else{
            if(taI[i+1]+tbaM[i] < tbI[i+1]){
                now = A;
                time += taI[i+1]+tbaM[i];
            }
            else{
                now = B;
                time += tbI[i+1];
            }
        }
        printf("select %c path and now is %lld\n",now==A? 'A':'B', time);
    }
    cout << time;
    return 0;
}