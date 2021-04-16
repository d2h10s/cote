#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  srand(time(NULL));
  int t[4], p[4], tmp, score = 100, flag, i;
  for (i = 0; i < 4; i++) {
    do {
      flag = 0;
      t[i] = rand() % 10;
      for (int j = 0; j < 4; j++)
        if (j == i) continue;
        else if (t[i] == t[j]) {
        flag = 1;
        break;
      }
    } while (flag == 1);
  }
  while (1) {
    int ss = 0, bb = 0;
    scanf_s("%d", & tmp);
    for (i = 0; i < 4; i++, tmp /= 10)
      p[3 - i] = tmp % 10;
    for (i = 0; i < 4; i++) {
      if (t[i] == p[i]) {
        ss++;
        for (int j = 0; j < 4; j++)
          if (t[i] == p[j]) p[j] = -1;
      } else
        for (int j = 0; j < 4; j++)
          if (t[i] == p[j]) {
            bb++;
            for (int k = 0; k < 4; k++)
              if (t[i] == p[k]) p[k] = -1;
          }
    }
    if (ss == 4) {
      printf("홈런!\n");
      printf("your score is %d\n You hit a homerun!!\n\n", score);
      break;
    } else {
      score -= 5;
      printf("your score is %d\n%d strike %d ball\n\n", score, ss, bb);
    }
  }
}