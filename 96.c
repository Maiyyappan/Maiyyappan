#include<stdio.h>
void main()
{
int a,b,c,i,k1=0,k=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
for(i=0;i<c;i++)
{
k1=a+i*b;
k=k+k1;
}
printf("%d ",k);
}
