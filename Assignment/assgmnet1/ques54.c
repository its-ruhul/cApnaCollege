#include <stdio.h>

//error: 'true' is not defined.
//fix: replace 'true' with '1'.

int main() {

    int i;
    
    if(1)
        printf("This will work");
    else   
        printf("This will not work");

    return 0;
}