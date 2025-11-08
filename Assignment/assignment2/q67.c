#include<stdio.h>
int main(){
int num = 0;
if (num++, num--, ++num)
switch(num)
{
case 1:
printf("case one");
break;
case 2:
printf("case two");
break;
default:
printf("default block");
break;
}
return 0;
}
