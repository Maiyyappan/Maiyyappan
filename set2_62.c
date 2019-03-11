#include <stdio.h>
#include<conio.h>
void main()
{
 int a,m,i;
 scanf("%d",&a);
 for(i=1;i<a;i++)
 {
     if( a%i==0)
     {
        m=a/i;
        if(m%2==1)
        {
            printf("%d",i);
            break;
        }
     }
 }
}
