#include<stdio.h>
void main()
{
int N,i;
clrscr();
scanf("%d",&N);
for(i=1;i<=N;i++)
{
if(N%i==0)
{
printf("%d ",i);
}
}
}
