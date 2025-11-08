#include <stdio.h>

//error: string literal was not closed, wrong double quote used.
//fix: replace ” with "

void main()
{
    if(!printf(""))
        printf("Okkk");
    else
        printf("Hii");
}