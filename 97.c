#include<stdio.h>
void main()
{
int N,r,s=0;
clrscr();
scanf("%d",&N);
while(N)
{
r=N%10;
s=s*10+r;
N=N/10;
}
printf("%d",s);
}
