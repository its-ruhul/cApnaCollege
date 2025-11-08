#include <stdio.h>

int main(){

  //part 1

  int i = 1;
  int j;

  while (i <= 5){
    
    j = i;
    while (j != 0){
      printf("*");
      j--;
    }

    printf("\n");
    i++;
  }

  printf("\n");

  i = 1;
  while (i <= 3){
    
    j = i;
    while (j != 0){
      printf("*");
      j--;
    }

    printf("\n");
    i++;
  }

  return 0;
}
