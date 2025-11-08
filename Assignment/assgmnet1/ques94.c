#include<stdio.h>      


//error: statement 'i=2;' will never be executed.
//fix: removed 'i=2;'

//error: break statement missing in case 0
//fix: added break statements in case 0

//warning: break statement in default case is not required.

//error: wrong loop structure.
//fix: removed 'i++' from each case and added 'i++' in while loop.

int main()
{
    int i=0;
    while(i < 2){
        switch(i){

            case 0:
                printf("Hai. This is case 0");
                break;

            case 1:
                printf("Hai. THis is case 1");
                break;

            case 2:
                printf("Hai. THis is case 2");
                break;

            default:
                printf("Hai.This is default");
        }

        i++;
    }
        

    return 0;
}
