#include <stdio.h>
#include<conio.h>

int main()
{
    int a,k,i,c=0,j;
    scanf("%d",&a);
    scanf("%d",&k);
    for(i=a+1;i<k;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
          {
            c++;
          }
        }
        if(c<1)
        {
            printf("%d ",i);
        }
        c=0;
    }
    return 0;
}
