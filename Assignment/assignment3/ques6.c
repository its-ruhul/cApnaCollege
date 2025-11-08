#include <stdio.h>

int main(){

  int num = 2;
  int isPrime = 0;
  int count = 0;

  printf("All the prime numbers between 2 and 100: ");

  while (num <= 100){

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

    if (isPrime == 1){
      printf("%d, ", num);
      count++;
    }

    num++;
  }

  printf("\nThe number of prime numbers are: %d \n", count);

  return 0;
}
