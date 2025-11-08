#include<stdio.h>

int main(){

  int num;
  int original;
  int digit;
  int reverse = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  original = num;

  while(num!=0){

    digit = num%10;
    reverse = (reverse+digit)*10;
    num = num/10;
  }

  reverse = reverse / 10;

  if (original == reverse){
    printf("The number is a palindrome \n");
  }
  else {
    printf("The number is not a palindrome \n");
  }

  return 0;
}
