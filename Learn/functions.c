#include <stdio.h>

int displaySum(int num1, int num2);

int main() {

  displaySum(5, 10);
}

int displaySum(int num1, int num2){

  int sum = num1 + num2;

  printf("%d \n", sum);
}