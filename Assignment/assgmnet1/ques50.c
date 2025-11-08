#include<stdio.h>

//error: case label does not reduce to an integer constant.
//fix: replace 'i' with a constant value like 1 or 2.

//error: expected ':' after 'case 2'.
//fix: replace ';' with ':'.

int main()
{
    int i = 1;

    switch(i)
    {
        case 1: 
            printf("case 1 executed");
            break;
        case 2:
            printf("case 2 executed");
            break;
        default:
            printf("default block executed");
            break;
    }

    return 0;
}