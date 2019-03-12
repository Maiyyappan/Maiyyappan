#include<stdio.h>
#include<conio.h>
void main()
{
int a,d=0,base=1,rem;
clrscr();
scanf("%d",&a);
while(a)
{
rem=a%10;
d=d+rem*base;
a=a/10;
base=base*2;
}
printf("%d",d);

}
