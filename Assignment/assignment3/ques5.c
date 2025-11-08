#include <stdio.h>

int main(){

  int num;
  int isPrime = 0;

  printf("Enter a number to check if its prime:");
  scanf("%d", &num);

  int i = 2;
  while (i < num){

    if (num % i != 0){
      isPrime = 1;
    }
    else{
      isPrime = 0;
      break;
    }
    i++;
  }

  if (isPrime == 0){
    printf("The number is a composite number.\n");
  }
  else{
    printf("The nubmer is prime number. \n");
  }

  return 0;
}
