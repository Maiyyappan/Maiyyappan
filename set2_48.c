#include<stdio.h>
void main()
{
int f,i=1;
clrscr();

scanf("%d",&f);
for(i=1;i<=f;i++)
{
if(f%i==0)
{
if(i%2!=0)
{
printf("%d",i);
}
}
}
}
