#include<stdio.h>
void main()
{
int n,a[100],d,k,c=0;
clrscr();
scanf("%d",&l);
for(k=0;k<l;k++)
{
scanf("%d",&a[k]);
}
d=a[0];
for(k=0;k<l;k++)
{
if(a[k]>d)
{
d=a[k];
c++;
}
}
printf("%d",c);
}
