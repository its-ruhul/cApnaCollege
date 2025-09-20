#include <stdio.h>

int main() {

    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks > 30 && marks <= 100) {
        printf("PASS \n");
    }
    else if(marks >= 0 && marks <= 30) {
        printf("FAIL \n");
    }
    else {
        printf("INVALID \n");
    }

    marks < 30 ? printf("FAIL \n") : printf("PASS \n");

    return 0;
}