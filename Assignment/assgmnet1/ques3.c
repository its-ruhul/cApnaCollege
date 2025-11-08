#include <stdio.h>

int main() {

    int num = 3;

    //example of if-else statement.
    if (num < 5){
        printf("The number is less than five. \n");
    }
    else {
        printf("The number is greater than 5. \n");
    }

    //example of nested if-else statement.
    if (num < 5){
        printf("The number is less than five");

            if (num % 2 == 0) {
                printf("and even. \n");
            }
            else{
                printf("and odd \n");
            }
    }
    else {
        printf("The number is greater than 5.");
    }

    //example of switch-case statement.
    switch(num){

        case 0: 
            printf("The number is zero. \n");
            break;

        case 1:
            printf("The number is one.\n");
            break;

        case 2: 
            printf("The number is two.\n");
            break;

        case 3:
            printf("The number is three.\n");
            break;

        default:
            printf("The number is more than 3");
    }

    return 0;

}