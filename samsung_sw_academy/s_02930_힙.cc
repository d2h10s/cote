#include <iostream>
#define MAX 100001
using namespace std;

int heap[MAX];

void swap(int i, int  j) {
    int temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;
}

int main(int argc, char** argv)
{
    int test_case;
    int T, N, i, command, data, cur, size, child;
    //freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; ++test_case) {
        size = 0;
        for (i = 0; i < MAX; i++) heap[i] = 0;
        
        printf("#%d ", test_case);
        scanf("%d", &N);
        for (i = 0; i < N; i++) {
            scanf("%d", &command);
            if (command == 1) {
                scanf("%d", &data);
                cur = ++size;
                heap[cur] = data;
                while (cur > 1 && heap[cur] > heap[cur / 2]) {
                    swap(cur, cur / 2);
                    cur = cur / 2;
                }
            }
            else if (command == 2) {
                cur = 1;
                if (!size){
                    printf("-1 ");
                    continue;
                }
                printf("%d ", heap[cur]);
                heap[cur] = heap[size];
                heap[size--] = 0;
                
                while (1) {
                    child = cur * 2;
                    if (child + 1 <= size && heap[child] < heap[child + 1]) child++;
                    if (child > size || heap[child] < heap[cur]) break;
                    swap(cur, child);
                    cur = child;
                }
            }
        }
        printf("\n");
    }
    return 0;
}