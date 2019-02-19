#include<stdio.h>
int main()
{
int N,M,i;
scanf("%d %d",&N,&M);
for(i=2;i<=M;i++)
{
if(N%i==00&& M%i==00)
{
printf("%d",i);
break;
}
}
return 0;
}
