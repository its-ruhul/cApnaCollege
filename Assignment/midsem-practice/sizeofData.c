#include <stdio.h>

int main(){

  printf("char: %d \n", sizeof(char));        // 1 byte
  printf("int: %d \n", sizeof(int));          // 4 bytes
  printf("float: %d \n", sizeof(float));      // 4 bytes
  printf("double: %d \n", sizeof(double));    // 8 bytes
  printf("long: %d \n", sizeof(long));        // 8 bytes
  printf("void: %d \n", sizeof(void));        // 1 byte
}