#include <stdio.h>

int main(){

  int a = 0;
  int b = 1;
  int sum = 0;
  int num;

  printf("Enter the size of series: ");
  scanf("%d", &num);

  int i = 1;

  do {
    printf("%d ", sum);


    sum = a + b;
    a = b;
    b = sum;

    i++;
  }
  while (i <= num);

  printf("\n");

  return 0;
}