#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,base=1,rem;
scanf("%d",&a);
while(a)
{
rem=a%2;
b=b+rem*base;
a=a/2;
base=base*10;
}
printf("%d",b);}
