# include<stdio.h>

//Area of square.
int main() {

    float side;

    printf("Enter the side of square: ");
    scanf("%f", &side);

    float area = side * side;

    printf("The area of square is: %f \n", area);

    return 0;
}