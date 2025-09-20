#include <stdio.h>
#include <math.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number >= 1) {
        printf("The number is a natural number. \n");
    }
    else {
        printf("The number is not a natural number. \n");
    }

    double num;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    int numOriginal = num;

    double num1 = num % 10;

    //num = num - num1;
    num = num / 10;

    double num10 = num % 10;

    //num = num - num1;
    num = num / 10;

    double num100 = num % 10;
    num = num / 10;

    int check = pow(num1, 3) + pow(num10, 3) + pow(num100, 3);

    if (check == numOriginal){
        printf("Amstrong number \n");
    }
    else {
        printf("Not an Amstrong number \n");
    }

    return 0;
}