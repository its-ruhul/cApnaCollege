#include <stdio.h>

int main() {

    int marks;

    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);

    if(marks < 30 && marks >= 0) {
        printf("Grade: C");
    }
    else if(marks >= 30 && marks < 70) {
        printf("Grade: B");
    }
    else if(marks >= 70 && marks < 90) {
        printf("Grade: A");
    }
    else if(marks >= 90 && marks < 100) {
        printf("Grade: A+");
    }
    else {
        printf("INVALID GRADE");
    }

    printf("\n");

    return 0;
}