
#include<stdio.h>
void main()
{
    int n,a[10],i,j,k,temp;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-2;j>=0;j--)
        {
        a[j+1]=a[j];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}
