#include <stdio.h>

int main(){

  int a = 59;
  int b = 46;

  printf("Bitwise AND: %d\n", a & b);
  printf("Bitwise OR: %d\n", a | b);
  printf("Bitwise XOR: %d\n", a ^ b);
  printf("Bitwise NOT a: %d\n", ~a);
  printf("Bitwise NOT b: %d\n", ~b);
  printf("Bitwise left shift: %d\n", a<<1);
  printf("Bitwise shift right: %d \n", b>>1);
}