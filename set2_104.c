#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10000],i,add=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        add=add+a[i]+a[i+1];
    }
    printf("%d",add);
}
