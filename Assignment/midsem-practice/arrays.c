#include <stdio.h>

int main() {

  int array[] = {0, 1, 2, 3};

  int x[3] = {0, 1, 2};

  array[4] = 4;
  array[5] = 5;

  printf("SIZE of array: %d \n", sizeof(array));

  int i = 0;
  while (i < 5){
    printf("%d ", array[i]);
    i++;
  }

  printf("\n");
  return 0;
}