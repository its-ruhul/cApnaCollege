#include <stdio.h>

int main() {

    int num = 5;

    switch(num++ == 5){

        case 1:
            printf("TRUE");
            break;

        case 0:
            printf("FALSE");
            break;

        default:
            printf("inside default");
            
    }

    return 0;
}