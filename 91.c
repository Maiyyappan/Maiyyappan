#include<stdio.h>
void main()
{
int l,b,h,v,a;
clrscr();
scanf("%d%d%d",&l,&b,&h);
v=l*b*h;
a=2*l*b+2*b*h+2*h*l;
printf("%d %d",a,v);
}
