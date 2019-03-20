#include <stdio.h>
#include<conio.h>
void  main()
{
   int n,a[100],b[100],s=0,i,j,k=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
    s=s+a[i];
    b[k]=s;k++;
}
for(i=n-1;i>=0;i--)
   {
      printf("%d ",b[i]);}
}
