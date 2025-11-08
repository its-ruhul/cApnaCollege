#include <stdio.h>

int main() {

  char letter;
  char invertedLetter;

  printf("Enter a character: ");
  scanf("%c", &letter);

  //checks for capital letters (from 65 to 90)
  if (letter >= 65 && letter <= 90){
    invertedLetter = letter + 32;
    printf("The inverted letter is: %c \n", invertedLetter);
  }

  //checks for small letters (from 97 to 122)
  else if (letter >= 97 && letter <= 122){
    invertedLetter = letter - 32;
    printf("The inverted letter is: %c \n", invertedLetter);
  }

  //hadling errors
  else {

    //checks for special characters
    if (letter >= 32 && letter <= 47){
      printf("ERROR: The data is of special character type \n");
    }

    //checks for digits
    else if (letter >= 48 && letter <= 57) {
      printf("ERROR: the data is of digits / number type \n");
    }
    else {
      printf("ERROR: datatype not defined. \n");
    }
  }
  return 0;
}
