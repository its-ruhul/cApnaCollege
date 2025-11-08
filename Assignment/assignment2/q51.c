#include<stdio.h>
int main()
{
int i = 1;
i++;
switch(i--)
{
case 1:
printf("case 1 executed");
break;
case 2:
printf("case 2 executed");
break;
default:
printf("default block executed");
break;
}
return 0;
}
