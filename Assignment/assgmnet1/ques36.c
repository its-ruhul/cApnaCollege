#include<stdio.h>

//error: 'break' used inside 'else' block.
//fix: replace 'break' with a valid statement like 'printf'.

void main(){

    int a=5,b=10,c=1;

    if(a && b > c){
        printf("Its to easy you can do it");
    }
    else{
        printf("Try again");
    }
}