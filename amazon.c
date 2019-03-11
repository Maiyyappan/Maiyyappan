#include <stdio.h>

int main()
{
   int i,j=2,sum=0,apple,n=1,unit=0,b=1;
   scanf("%d",&apple);
   while(n)
   {
       unit++;
       sum=b*12;
       if(apple<=sum)
       {    
           printf("%d units",unit);
           break;
       }
       b=b+j*j;
       j++;
   }
   
}
