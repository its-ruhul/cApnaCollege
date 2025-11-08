//error: case label does not reduce to an integer constant.
//fix

#include<stdio.h>

//warning: 'void main' should be 'int main'.

int main(){

    int a = 1;

    switch(a / 2){

        case 1:
            printf("Case ONE \n");
            break;

        case 0:
            printf("Case ZERO \n");
            break;

        default:
            printf("DEFAULT \n");
            break;
    }

    return 0;
}