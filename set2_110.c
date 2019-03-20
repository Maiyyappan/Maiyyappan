#include <stdio.h>
#include<conio.h>
void main()
{
   int n,a[100],b[100],c[100],s=0,i,j,r=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
    s=s+a[i];b[i]=s;
    }
    for(i=0;i<n;i++)
   {
       s=s+a[i]; 
       
c[r]=s;
r++;
}
for(i=0;i<n;i++)
   {
      printf("%d ",b[i]+c[i]);
  }  }
