//error: 'true' undeclared (first use in this function).
//fix: include <stdbool.h> or use 1 instead of true.

#include<stdio.h>
#include<stdbool.h>

int main()
    {
    int i;

    if(true)
        printf("This will work");
    else 
        printf("This will not work");
 
    return 0;
}