#include <stdio.h>

int main() {

    //iterator; counter; 
    for(int i = 10; i > 0; i = i - 1){
        printf("%d \n", i);
    }

    //print the numbers from 0 to 10
    for(int i = 0; i <= 10; i = i + 1){
        printf("%d", i);
    }

    printf("\n");

    return 0;
}