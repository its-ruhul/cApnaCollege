#include <stdio.h>

int main(){

    char item;
    int i = 0;
    int cost = 0;
    int quantity = 0;


    printf("Press any other key to exit. \n");
    printf("(B = Burgers, S = Sandwiches, P = Pizza, F = French Fries)\n");

    while( i == 0 ){

        printf("Please give your orders: ");
        scanf("%c", &item);

        switch(item) {

            case 'B':
            {
                printf("Enter the number of items: ");
                scanf("%d", &quantity);

                cost = cost + quantity * 200;
                break;
            }


            case 'F':
            {
                printf("Enter the number of items: ");
                scanf("%d", &quantity);

                cost = cost + quantity * 50;
                break;
            }

            case 'P':
            {
                printf("Enter the number of items: ");
                scanf("%d", &quantity);

                cost = cost + quantity * 500;
                break;
            }

            case 'S':
            {
                printf("Enter the number of items: ");
                scanf("%d", &quantity);

                cost = cost + quantity * 15;
                break;
            }

            default:
            {
                printf("default executed \n");
                i = 1;
            }                
        }      
    }

    printf("The total cost is: %d \n", cost);
}