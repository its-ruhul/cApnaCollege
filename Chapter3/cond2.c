#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("The number is a positive");

        if(number % 2 == 0) {
            printf(" and even. \n");
        }
        else {
            printf(" and odd. \n");
        }
    }
    else {
        printf("The number is a negative \n");
    }

    return 0;
}