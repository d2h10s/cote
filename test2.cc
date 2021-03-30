#include <iostream>
typedef struct{float score; int num;}grade;
int main(){
    int N = 5;
    grade stu[5]{{10,0}, {3,1}, {13,2},{7,3},{9,4}};
    for(int i = 1; i < N; i++){
        int j = i;
        while(j > 0 && stu[j-1].score > stu[j].score){
            grade temp = stu[j];
            stu[j] = stu[j-1];
            stu[j-1] = temp;
            j--;
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d %f\n", stu[i].num, stu[i].score);
    }
}