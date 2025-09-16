#include<stdio.h>

int main() {

    char day; //m-mon; t-tues; w-wed; T; f; s; S;
    printf("Enter day(1-7): ");
    scanf("%s", &day);

    switch (day) {

        case 'm': printf("Monday \n");
            break;
        
        case 't': printf("Tuesday \n");
            break;

        case 'w': printf("Wednesday \n");
            break;

        case 'T': printf("Thursday \n");
            break;

        case 'f': printf("Friday \n");
            break;

        case 's': printf("Saturday \nC");
            break;

        case 'S': printf("Sunday \n");
            break;

        default: printf("Invalid day \n");
    }

    return 0;
}