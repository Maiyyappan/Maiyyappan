#include<stdio.h>
void main()
{
int a[10],i,n1,k,l=0;
clrscr();
scanf("%d%d",&n1,&k);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(a[i]==k)
l++;
}
printf("%d",l);
getch();
}
