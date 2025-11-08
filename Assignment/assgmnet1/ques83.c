//error: 'true' undeclared.
//fix: include <stdbool.h>.

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 0;

    if(true)
        printf("inside if block");
    else 
        printf("inside else block");

    return 0;
}