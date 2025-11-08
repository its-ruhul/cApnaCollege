#include<stdio.h>

//error: prinf should be printf.

//error: missing return type of main function.
//fixed: added return.

//error: missing '}' at the end of main function.

int main(){

    int m = 40, n = 20;

    if(m > n) {
        printf("m is greater than n");
    }
    else if(m < n) {
        printf("m is less than n");
    }
    else {
        printf("m is equal to n");
    }

    return 0;
}
