#include <stdio.h>

int main()
{  
    int n,i,a[10000],j=0,c=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    { if(n%i==0)
      {
         for(j=2;j<i/2;j++)
         {
             if(i%j==0)
             {
                 c=0;
                 break;
             }
            
         } 
          if(c==1)
          {
            printf("%d ",i);
          }
      }
    }
    return 0;
}
