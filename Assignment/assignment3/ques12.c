#include <stdio.h>

int main(){

  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int min = 32767;
  int max = 0;

  int i = 0;
  while (i < 10){

    if (min > numbers[i]){
      min = numbers[i];
    }
    i++;
  }

  i = 0;
  while (i < 10){

    if (max < numbers[i]){
      max = numbers[i];
    }
    i++;
  }

  printf("The minimum number is: %d \n", min);
  printf("The maximum number is: %d \n", max);

  return 0;
}
