#include<stdio.h>
void main()
{
int a[10],i,n,k1,m=0;
scanf("%d%d",&n,&k1);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k1;i++)
{
m=a[i];
}
printf("%d",m);
}
