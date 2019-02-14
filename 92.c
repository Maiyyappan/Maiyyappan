#include<stdio.h>
void main()
{
int a[10],i,n1,sum=0;
clrscr();
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
