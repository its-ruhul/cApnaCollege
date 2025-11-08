#include <stdio.h>

//error: switch expression results in a non-integer type.
//fix: modified the switch expression to ensure it results in an integer type.

//warning: return type of 'main' is not 'int'.
//fix: changed the return type of 'main' from 'void' to 'int'.

//warning: 'break' in default case.
//fix: removed 'break'

int main() {

    int a = 2;

    switch (a){

        case 1:
            printf("One...");
            break;
        
        case 2:
            printf("Two...");
            break;

        default:
            printf("Other...");
    }

    return 0;
}