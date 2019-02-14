#include<stdio.h>
void main()
{
int n,len=0;
clrscr();
scanf("%d",&n);
while(n)
{
n=n/10;
len++;
}
  printf("%d",len);
}
