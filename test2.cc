#include <stdio.h>
#include <memory.h>

union int_data{
  unsigned char data[4];
  int ints;
};

int main(){
  int a = 66666666;
  int_data sixes;
  sixes.ints = a;
  printf("size of int is %d\n", sizeof(a));

  printf("each byte of int is ");
  for(int i = 0; i < sizeof(a); i++){
    printf("%X ", sixes.data[i]);
  }

  int sum =  0XAA | 0X40<<(8*1) | 0XF9<<(8*2) | 0X3<<(8*3);
  printf("\nsum of byte is %u", sum);
}