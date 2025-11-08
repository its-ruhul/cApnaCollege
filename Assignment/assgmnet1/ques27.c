#include<stdio.h>

//error: 'break' used inside 'else' block
//fix: replace 'break' with a valid statement like 'printf'

int main()
{
    float me = 5.25;
    double you = 5.25;

    if(me == you)
        printf("Appy is best");
    else 
        printf("Apply is not good");
    
    return 0;
}