#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int album_num;
    int stu_num;
    int time;
    int up;
}student;

vector<student> stu(101, student{ -1, 0, 0, 0 });
student* album[20];
int main() {
    int n, m, stu_num, cnt = 0, dashboard[21], time = 0;
    scanf("%d\n%d", &n, &m);

    while (m--) {
        scanf("%d", &stu_num);

        if (stu[stu_num].album_num != -1) {
            stu[stu_num].up++;
        }
        else {
            int isFull = true;
            for (int album_num = 0; album_num < n; album_num++) {
                if (album[album_num] == nullptr) {
                    album[album_num] = &stu[stu_num];
                    stu[stu_num] = { album_num, stu_num, time++, 1 };
                    isFull = false;
                    break;
                }
            }
            if (isFull) {
                int min = 1000;
                vector<int> min_albums;

                for (int i = 0; i < n; i++) {
                    if (album[i] != nullptr) {
                        if (min > album[i]->up) {
                            min = album[i]->up;
                            min_albums = { i };
                        }
                        else if (min == album[i]->up) {
                            min_albums.emplace_back(i);
                        }
                    }
                }
                sort(min_albums.begin(), min_albums.end(), [](auto a, auto b) {
                    return album[a]->time > album[b]->time;
                    });
                int idx = min_albums.back();
                album[idx]->album_num = -1;
                stu[stu_num] = { idx, stu_num, time++, 1 };
                album[idx] = &stu[stu_num];
            }
        }
    }
    vector<student*> answer;
    for (int i = 0; i < n; i++) {
        if (album[i] != nullptr) {
            answer.emplace_back(album[i]);
        }
    }
    sort(answer.begin(), answer.end(), [](auto a, auto b) {
        return a->stu_num < b->stu_num;
    });
    for (auto a : answer) {
        printf("%d ", a->stu_num);
    }
}