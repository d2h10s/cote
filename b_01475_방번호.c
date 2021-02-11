#include <stdio.h>

int main(){
    int set[10] = {0}, cnt = 0;
    char room[8];
    scanf("%s", room);
    for(int i = 0; room[i] != '\0'; i++){
        if(room[i] == '6') room[i] = '9';
        if (!set[room[i] - '0']){
            for(int j = 0; j <10; j++) set[j]++;
            cnt++;
            set[9]++;

        }
        set[room[i] - '0']--;
    }
    printf("%d", cnt);

}