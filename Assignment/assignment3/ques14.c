#include <stdio.h>

int main() {

  int array1[5] = {3, 8, 4, 9, 20};
  int array2[5] = {1, 2, 15, 20, 27};

  int num[10];
  int temp;

  int j = 0;
  while (j < 5){
    num[j] = array1[j];
    j++;
  }

  while (j < 10){
    num[j] = array2[j-5];
    j++;
  }

  //num[10] has been made. merge complete.

  printf("{");

  int i = 0;
  while (i < 10){

    printf("%d, ", num[i]);
    i++;
  }

  printf("} \n");

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
