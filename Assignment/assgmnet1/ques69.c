#include <stdio.h>

//error: invalid case labels using logical OR.
//fix: removed '|| case 22' from the case label.

void main() {

    short day = 2;

    switch(day){

        case 2:
            printf("%d nd", day);
            break;

        default:
            printf("%d th", day);
            break;
    }
}
