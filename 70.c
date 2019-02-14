#include<stdio.h>
void main()
{
int N,k=1,t;
clrscr();
scanf("%d",&N);
t=N;
while(N)
{
k=k*2;
if(t<k)
{
printf("%d",k);
break;
}
N--;
}
}
