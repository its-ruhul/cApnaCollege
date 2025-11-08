#include <stdio.h>

//error: used ";" after if condition.
//fix: remove ";"

int main() {

    int i = 5, j = 5;

    if(i == j)
        printf("Equal");

    else
        printf("Not Equal");

    return 0;
}