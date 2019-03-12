#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,i,a[10],sum=0;
clrscr();
scanf("%d%d",&l,&r);
for(i=l;i<=r;i++)
{
if(a[i]%2!=0)
{
sum=sum+a[i];
}
}
printf("%d",sum);}
