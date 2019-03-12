#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,p,a[10],l;

scanf("%d%d%d",&n,&p,&k);
l=0;i=0;
while(n)
{
rem=n%10;
l++;
a[i]=rem;
i++;
n=n/10;
}
for(i=0;i<l;i++)
{
if(i==0)
sum=sum+a[i];
if(i==l-1)
sum=sum+a[i];
}
printf("%d",sum);}
