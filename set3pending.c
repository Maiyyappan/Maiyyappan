#include<stdio.h>
void main()
{
    int a[10],i,j,n1,t;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
}
