#include<stdio.h>

int main() {

  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = 0;
  int avg;

  int i = 0;

  while (i < 10){
    sum = sum + numbers[i];
    i++;
  }

  avg = sum / 10;

  printf("SUM: %d \n", sum);
  printf("AVG: %d \n", avg);

  return 0;

}
