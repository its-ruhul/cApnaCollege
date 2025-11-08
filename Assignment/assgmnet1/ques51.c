#include <stdio.h>

int main() {

    short int si = 1;
    switch(++si - si++){

        case 1L:
            printf("First");
            break;

        case 2L:
            printf("Second");
            break;

        default:
            printf("Bye");
            break;
    }

    return 0;
}