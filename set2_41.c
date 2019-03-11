    
#include<stdio.h>
int main()
{
int n,k,f=1,c=0,i,j;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
for(j=i;j>0;j--)
{
f=f*k;
if(n==f)
{
c=1;
i=0;
break;
}
}
}
if(c==1)
printf("yes");
else
printf("no");
return 0;
}
