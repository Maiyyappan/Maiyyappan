#include<stdio.h>
void main()
{
int a,b,i,gcd,l;
clrscr();
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{
gcd=i;
}
}
l=a*b/gcd;
printf("%d",l);
}
