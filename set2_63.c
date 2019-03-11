#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[10],c;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(j=1;j<n;j++)
{
if(a[k]<c)
{
c=a[k];
}
}
printf("%d",c);
}
