#include<stdio.h>
int main()
{
    long int n,a[1000],i,j,b[1000],k,t;
    clrscr();
    scanf("%ld",&n);
    scanf("%ld",&k);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%ld",&b[i]);
    }
    for(i=0;i<k;i++)
    {
        a[n]=b[i];
        n++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%ld ",a[i]);
    }
    return 0;
}
