#include<stdio.h>
int main()
{
int i=1,j=4;
switch(i|j)
{
case 1:
printf("inside case 1");
break;
case 3:
printf("inside case 3");
break;
case 4:
printf("inside case 4");
break;
case 7:
printf("inside case 7");
break;
}

return 0;
}