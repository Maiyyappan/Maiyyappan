#include<stdio.h>
void main()
{
int a[10],n1,n2,i,m,k1,c,p;
scanf("%d%d",&n1,&n2);
m=n1-n2;
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(k1=0;k1<=m;k++)
{
c=0;
for(i=0;i<n1;i++)
{
if(a[i]>c)
{
c=a[i];
p=i;
}
}
a[p]=0;
}
printf("%d",c);
}
