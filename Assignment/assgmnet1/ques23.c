#include<stdio.h>

//error: the second case label does not match the switch expression type.
//fix: changed 25.0 to 26L.

int main()
{
    switch(25)
    {
        case 25L:
        printf("25L");
        break;

        case 26L:
        printf("25.0");
        break;

        default:
        printf("Nothing");
        break;
    }

    return 0;
}