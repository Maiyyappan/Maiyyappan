#include<stdio.h>
void main()
{
int a[10],i1,j=0,n,k,m=0,b[10],l;
clrscr();
scanf("%d%d",&n,&k);
for(i1=0;i1<n;i1++)
{
scanf("%d",&a[i1]);
}
for(i1=0;i1<n;i1++)
{
if(a[i1]%2!=0)
{
b[j]=a[i1];
j++;
m++;
}
}
for(j=0;j<k;j++)
{
l=b[j];
}
printf("%d ",l);
}
