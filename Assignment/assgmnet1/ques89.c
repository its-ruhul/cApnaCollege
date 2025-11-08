#include<stdio.h>
#define FALSE -1
#define ZERO 0
#define TRUE 1

//error: 'Null' undeclared.
//fix: change 'Null' to 'ZERO' and declared.

int main()
{
    if(ZERO)
        printf("NULL");
    else if(FALSE)
        printf("TRUE");
    else
        printf("FALSE");

    return 0;
}