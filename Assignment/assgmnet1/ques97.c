//error: missing #include <stdio.h>.

#include <stdio.h>

//warning: using void main is not standard-compliant
//fix: using int main() instead.

//error: use of undeclared variable 'y'.
//fix: use ',' instead of ';' to separate variable declarations.

int main()
{
    int x = 40, y = 30;

    if(! x < y)
        printf("\nHello World");
    else
        printf("\nGood by");

    return 0;
}