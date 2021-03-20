#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer, s1{1,2,3,4,5}, s2{2,1,2,3,2,4,2,5}, s3{3,3,1,1,2,2,4,4,5,5};
    int i, c[3]{0}, max = 0;
    const int size = answers.size(), m1 = 5, m2 = 8, m3 = 10;
    for(i = 0; i < size; i++){
        if (answers[i] == s1[i % m1]) c[0]++;
        if (answers[i] == s2[i % m2]) c[1]++;
        if (answers[i] == s3[i % m3]) c[2]++;
    }
    for(i = 0; i <3; i++){
        max = max < c[i]? c[i]:max;
    }
    for(i = 0; i < 3; i++) if(max == c[i]) answer.push_back(i+1);
    return answer;
}