#include <stdio.h>

void main()
{
int n,i,j,f=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{   
    f=0;
  for(j=2;j<=i/2;j++)
  {
    if(i%j==0)
      f=1;  
  }
    if(f==0 && n%i==0)
     printf("%d ",i);}}
