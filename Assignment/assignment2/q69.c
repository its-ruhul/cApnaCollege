#include<stdio.h>
void main(){
int a=5;
a=a>=4;
switch(2){
case 0: a=8;
case 1: a=10;
case 2:++a;
case 3:printf("%d",a);
}
}
