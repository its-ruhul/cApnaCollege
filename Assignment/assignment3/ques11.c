#include <stdio.h>

int main(){

  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int search = 9;

  int i = 0;
  while (i < 10){

    if (i == search){
      break;
    }
    i++;
  }

  printf("The position of %d is [%d] \n", search, i);

  return 0;
}
