#include<stdio.h>
void main()
{
int a,b,N;
clrscr();
scanf("%d%d",&a,&b);
N=a-b;
if(N%2==0)
printf("even");
else
printf("odd");
getch();
}
