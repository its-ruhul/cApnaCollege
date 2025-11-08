#include <stdio.h>

int main() {

    if(printf("0") == NULL)
        printf("inside if block");
    else
        printf("inside else block");

    return 0;
}