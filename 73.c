#include<stdio.h>
void main()
{
int N,a,b,i,f=0;
clrscr();
scanf("%d",&N);
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if(N==i)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
}
