#include <stdio.h>

//error: case labels must be constant expressions.
//fix: replaced 'a' with a constant value like 2.

//error: expected ':' after 'case' statements.
//fix: replaced ';' with ':'.

//error: 'void main()' should be 'int main()'.
//fix: changed 'void main()' to 'int main()'.

int main() {

    int a = 2;
    int b = a;

    switch(b)
        {
            case 2:
                printf("Case-a \n"); break;

            case 3:
                printf("No option \n"); break;

            default:
                printf("Exit from switch");
        }

    printf("Exit from switch");

    return 0;
}