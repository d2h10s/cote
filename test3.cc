#include <stdio.h>

#pragma pack(push, 1)
typedef struct{
    char a;
    char b;
    int c;
    char d;
}STRUCT_A;
#pragma pack(pop)

int main(){
    printf("size of struct is %lu\n", sizeof(STRUCT_A));
}