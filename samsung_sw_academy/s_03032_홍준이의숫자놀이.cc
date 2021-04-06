#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, r[2][3], x, y;
	freopen("input.txt", "r", stdin);
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        // r00 r01  r02
        // r10 r11  r12
        for(int i = 0; i < 2; i++) for(int j = 0; j < 3; j++) r[i][j] = 0;
        r[0][2] = r[1][2] = 1;
        scanf("%d %d\n%d %d", &r[0][0], &r[0][1], &r[1][0], &r[1][1]);
        float a = - r[1][0]/r[0][0];
        int cnt = 0;
        for(int i = 0; i < 3; i++) {
            r[1][i] += r[0][i] * a;
            if (!r[1][i]) cnt++;
        }
        if (cnt != 1) printf("#%d 0 0\n", test_case);
        else{
            y = r[1][2]/r[1][1];
            x = (r[0][2] - r[0][1]*y)/r[0][0];
            printf("#%d %d %d\n", test_case, x, y);
        }


	}
	return 0;
}