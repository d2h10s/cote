#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, first, second;
    string answer;
	//freopen("input.txt", "r", stdin);
    
	cin>>T;
	for(int test_case = 1; test_case <= T; ++test_case){
        scanf("%2d%2d", &first, &second);
        if (first < 13 && second < 13){
        	if (!first && !second) answer = "NA";
        	else if (!first) answer = "YYMM";
        	else if (!second) answer = "MMYY";
            else answer = "AMBIGUOUS";
        }
        else if (first > 12 && second > 12) answer = "NA";
        else if (first > 12 && second) answer = "YYMM";
        else if (second > 12 && first) answer = "MMYY";
        else answer = "NA";
        cout << '#' << test_case << ' ' << answer << '\n';
	}
	return 0;
}