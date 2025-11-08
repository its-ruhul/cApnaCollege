#include<stdio.h>

int main(){

    int x;
    float y = 7.0;

    switch(x = y + 1){
        
        case 8: printf("It's Eight."); break;

        default: printf("Oops No choice here!!!");
    }
}