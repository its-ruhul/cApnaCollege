#include<stdio.h>

//Area of the circle
int main() {

    float radius;
    float pi = 3.14;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("The area is: %f \n", area);

    return 0;

}