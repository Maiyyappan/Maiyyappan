#include<stdio.h>
void main()
{
int n,j,f=0;
clrscr();
scanf("%d",&n);
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
f=1;
break;
}
}
if(f==0)
printf("yes");
else
printf("no");
}
