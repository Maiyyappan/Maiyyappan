#include<stdio.h>
#include<conio.h>
void main()
{
int n1,k,p=1,l=0,r=0;
clrscr();
scanf("%d",&n1);
k=n1;
while(n1)
{
n1=n1/10;
l++;
}
while(l)
{
p=p*10;
l--;
}
while(k)
{
r=k;
p=p/10;
k=r/p;
printf("%d ",k);
r=r%p;
k=r;
}
getch();
}
