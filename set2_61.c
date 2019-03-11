#include<stdio.h>
#include<conio.h>
void main()
{
 int n,m,i,j,x[50],t=0,l=0;
 scanf("%d",&n);
 scanf("%d",&m);
 for(i=0;i<n;i++)
 {
     scanf("%d",&x[i]);
 }
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
      t=x[i]+x[j];
      if(t==m)
      {
        l=1;
        break;
      }
    }
    if(l==1)
        break;
    
 }
    if(l==1)
    
      printf("yes");
     
    else
    
      printf("no");
     
    
}
