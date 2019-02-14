#include<stdio.h>
void main()
{
int a[100],n,i=0,l=0,r1;
clrscr();
scanf("%d",&n);
while(n)
{
r1=n%10;
a[i]=r1;
n=n/10;
i++;
l++;
}
for(i=l-1;i>=0;i--)
{
if(a[i]%2!=0)
printf("%d ",a[i]);
}
}
