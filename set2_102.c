#include<stdio.h>
void main()
{
int r,d,b=0,i=1;
scanf("%d",&d);
while(d)
{
r=d%10;
d=d/10;
b=b+(i*r);
i=i*2;
}
printf("%d",b);
getch();}
