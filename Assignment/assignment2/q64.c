#include<stdio.h>

int main(){

    char item;
    int noOfDish;
    int i = 0;
    int sum = 0;
    int noOfItem;

    printf("--FAST FOOD MENU-- \n");
    printf("Please choose one of the following: \n");
    printf("1. B = Burger \n2. F = French Fries \n3. P = Pizza \n4. S = Sandwiches \n \n");

    printf("Enter number of dishes you want to enter: ");
    scanf("%d", &noOfDish);

    while(i < noOfDish){

        printf("Enter your choice(B/F/P/S): ");
        scanf(" %c", &item);

        printf("Enter the number of %c: ", item);
        scanf(" %d", &noOfItem);

        if (item == 'B'){
            sum = sum + 200 * noOfItem;
        }
        else if(item == 'F'){
            sum = sum + 50 * noOfItem;
        }
        else if(item == 'P'){
            sum = sum + 500 * noOfItem;
        }
        else if(item == 'S'){
            sum = sum + 15 * noOfItem;
        }
        else{
            printf("ERROR: Invalid statement \n");
        }

        i++;
    }

    printf("Total price: %d \n", sum);

    return 0;
}
