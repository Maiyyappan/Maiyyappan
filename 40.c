#include<stdio.h>
#include<conio.h>
void main()
{
int n1,a,b,c,i;
scanf("%d",&n1);
a=0;
b=1;
printf("%d%d",a,b);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
}
