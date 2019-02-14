#include<stdio.h>
void main()
{
int a[100],n1,i;
clrscr();
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(a[i]>a[i+1])
printf("%d",i);
}
}
