#include<stdio.h>
void main()
{
int a,b,j,gcd;
clrscr();
scanf("%d%d",&a,&b);
for(j=1;j<=a&&j<=b;j++)
{
if(a%j==0&&b%j==0)
{
gcd=j;
}
}
printf("%d",gcd);

}
