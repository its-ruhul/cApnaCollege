#include <stdio.h>

int main(){

  int a = 5, b = 3, c = 7, small;

  int big;

  small = (a < b ? (a < c ? a : c) : ( b < c ? b : c));

  printf("%d \n", small);

  if (a < b) {                  //false, so this part won't be executed.
    
    if (a < c){
      big = a;
    }
    else{
      big = c;
    }
  }
  else{                         //this part would be executed.

    if (b < c){                 //true
      big = b;                  //big = 3
    }
    else {
      big = c;
    }
  }

  printf("%d \n", big);

  return 0;
}