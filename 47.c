#include<stdio.h>
void main()
{
    int a[50],i,j,k,t;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<k;i++)
    {
    printf("%d",a[i]);
}
printf("smallest number %d",a[0]);
printf("largest number %d",a[k-1]);
}
