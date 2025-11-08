//Convert Decimal to Binary

#include <stdio.h>
#include <math.h>

int main(){

  int decimal;
  int binary = 0;
  int remainder;

  printf("Enter the decimal no.: ");
  scanf("%d", &decimal);

  int i = 1;
  while (decimal != 0){

    remainder = decimal % 2;
    decimal = decimal / 2;

    binary = binary + (remainder * i);
    i = i * 10;
  }

  printf("%d \n", binary);

  return 0;
}
