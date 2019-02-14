#include<stdio.h>
void main()
{
int N,r,k=1;
clrscr();
scanf("%d",&N);
while(N)
{
r=N%10;
k=k*r;
N=N/10;
}
printf("%d",k);
}
