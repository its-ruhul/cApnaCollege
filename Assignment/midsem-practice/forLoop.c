#include <stdio.h>

int main() {

  int i;
  int j;
  int isPrime = 1;

  //loop from 2 to 100.

  for (i = 2; i <= 100; i++){ 

    //loops from 2 to 2, 3, 4, 5, 6, 7... 100.
    for (j = 2; j < i; j++){

      
      if (i % j == 0){
        isPrime = 0;
        break;
      }
      else {
        isPrime = 1;
      }
    }

    if (isPrime == 1){
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}