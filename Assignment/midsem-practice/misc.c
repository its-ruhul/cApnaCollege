#include <stdio.h>

int main() {

  FILE *fp;

  const int num = 12; // defining a constant value.
  
  printf("Enter value using getchar(): ");
  char name = getchar();      //getchar() requires you to enter a char and then enter.

  printf("%d \n", name);

  fp = fopen("forLoop.c", "r");

  printf("Enter value using getc(): ");
  char name2 = getc(fp);

  //getch();
  //its not a standard function in c now.
  // use getc or getchar.

  return 0;
}