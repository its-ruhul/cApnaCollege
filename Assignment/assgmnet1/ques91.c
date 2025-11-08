//error: 'flase' undeclared.
//fix: 'flase' to 'FALSE' and declared.

#include<stdio.h>
#define FALSE 0

int main()
{
    int i;

    if(FALSE)
        printf("This will work");
    else 
        printf("This will work");

    return 0;
}