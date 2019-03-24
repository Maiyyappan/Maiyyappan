#include<stdio.h>
void main()
{
int n,i,a,b,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%d",&a,&b);
if(a<b)
{
c=c+1;
}
}
printf("%d",c);
getch();
}
