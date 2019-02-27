#include <stdio.h>

int main()
{
    int a[20],i,j,n,temp,k;
    
    scanf("%d",&n);
    scanf("%d",&k);
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
    for(i=j+1;i<n;i++)
    {
        if(a[j]>a[i])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    }
    printf("%d",a[k-1]);
    return 0;
}
