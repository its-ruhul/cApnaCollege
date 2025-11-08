#include <stdio.h>

//warning: printf inside switch without case/default label.
//fix: removed printf from switch.

//warning: break statement missing in switch cases.
//fix: added break statements in switch cases.

int main() {

    int a = 2;

    switch(a)
    {
        default:
            printf("Default\n");

        case 2:
            printf("Case-2\n");
            break;

        case 3:
            printf("Case-3\n");
            break;
    }

    printf("Exit from switch \n");
}