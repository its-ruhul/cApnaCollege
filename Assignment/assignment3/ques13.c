#include <stdio.h>

int main() {

  int num[10] = {43, 63, 55, 31, 16, 72, 16, 17, 23, 46};
  int temp;
  int i,j;

  //bubble sort

  j = 10;
  while(j != 0){
    i = 0;
    while (i <= j){

        if (num[i] < num[i+1]){

          temp = num[i];
          num[i] = num[i+1];
          num[i+1] = temp; 
        }   
      i++;
    }
    j--;
  }

  printf("{");

  i = 0;
  while (i < 10){

    printf("%d, ", num[i]);
    i++;
  }

  printf("} \n");

  return 0;
}
