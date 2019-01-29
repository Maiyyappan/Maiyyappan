#include <stdio.h>
#include<conio.h>

int main()
{
    int a[30],n,i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }    
    printf("%d ",max);
    return 0;
}
