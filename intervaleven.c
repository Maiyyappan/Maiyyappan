
#include <stdio.h>
#include<conio.h>

int main()
{
    int a,k,i;
    scanf("%d",&a);
    scanf("%d",&k);
    for(i=a+1;i<k;i++)
    {
        if(i%2==0)
     {
        printf("%d ",i);
     }
    }
    
    return 0;
}
