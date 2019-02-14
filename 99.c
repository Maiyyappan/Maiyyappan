#include<stdio.h>
void main()
{
int p,n,r,c=0;
clrscr();
scanf("%d%d%d",&p,&n,&r);
c=p*n%r;
printf("%d",c);
}
