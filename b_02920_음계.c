#include <stdio.h>

int main(){
    int m[8], isde = 1, isas = 1;
    for(int i = 0; i < 8; i++)
        scanf("%d", m +i);

    for(int i = 0; i < 8; i++){
        if(m[i] != i + 1 && isas) {
            isas = 0;
        }
        if(m[i] != 8 - i && isde){
            isde = 0;
        }
    }
    if (!isde && !isas) printf("mixed");
    else if (isde) printf("descending");
    else if (isas) printf("ascending");
}