#include<stdio.h>
#include<conio.h>
void main()
{
   int n,a[100],i,t=0,r=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
    if(a[i]<a[i+1])
      {
          t=a[i];
          a[i]=a[i+1];
          
          a[i+1]=t;
          r++;
      }
   }
   if((r>0)&&(r==n))
   {
   for(i=0;i<n;i++)
   {
   printf("%d ",i+1);}}
   else
   {
       for(i=n-1;i>=0;i--)
       {
           printf("%d ",i+1);
       }
   }
   getch();
  }
