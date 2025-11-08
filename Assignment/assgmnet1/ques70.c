#include <stdio.h>

//error: 'Short' and '2S' are not valid in C language.
//fix: replaced 'Short' with 'short' and '2S' with '2.

void main() {

    short int a = 2;

    switch(a)
    {
        case 1L:
            printf("One\n");
            break;

        case 2:
            printf("Two \n");
            break;

        default:
            printf("Else \n");
            break;
    }
}