#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
while(a)
{
if(a%10==0)
{
printf("%d",a);
break;
}
a++;
}
}
