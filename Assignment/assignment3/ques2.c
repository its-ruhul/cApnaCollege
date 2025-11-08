#include<stdio.h>

int main() {

  int num1 = 0;
  int num2 = 1;
  int lenght;
  int sum;

  printf("Enter the terms in Fibonacci Series(more than 2): ");
  scanf("%d", &lenght);

  printf("0, ");
  printf("1, ");

  int i = 3;

  while(i <= lenght){

    sum = num1 + num2;
    num1 = num2;
    num2 = sum;

    printf("%d, ", sum);

    i++;
  }

  printf("\n");

  return 0;
}
