#include<stdio.h>

int main(){

  char operator;
  int num1;
  int num2;
  int result;

  printf("Enter the first number:");
  scanf("%d", &num1);

  printf("Enter the second number:");
  scanf("%d", &num2);

  printf("Choose your operation:\n");
  printf("add(a), subtract(s), multiply(m), divide(d): ");
  scanf(" %c", &operator);

  switch(operator){

    case 'a': 
      result = num1 + num2;
      break;

    case 's':
      result = num1 - num2;
      break;

    case 'm':
      result = num1 * num2;
      break;

    case 'd':
      result = num1 / num2;
      break;

    default:
      printf("ERROR: Invalid Input \n");
  }

  printf("The result is: %d \n", result);

  return 0;
}
