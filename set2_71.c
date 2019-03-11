    
#include<stdio.h>
void main()
{
  int n,i,arr[100],j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
        if(i<(i%2==0))
        {
            if(arr[i]>arr[i+1])
            printf("%d",arr[i]);
            else
             printf("%d",arr[j]);
        }
    }getch();}
    
