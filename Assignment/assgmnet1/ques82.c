#include<stdio.h>

//error: unexpected ';' before ')'.

int main()
{
    int a;

    if(scanf("%d",a))
        printf("inside if block");
    else 
        printf("inside else block");

    return 0;
}