#include<stdio.h>
void main()
{
int a[10],i,n1,k,f=0;
clrscr();
scanf("%d%d",&n1,&k);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(a[i]==k)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
