#include<stdio.h>
void main()
{
int a,b,p,i,f1=0;
clrscr();
scanf("%d%d",&a,&b);
p=a*b;
for(i=1;i<p;i++)
{
if(p==i*i)
f1=1;
}
if(f1==1)
printf("yes");
else
printf("no");
getch();
}
