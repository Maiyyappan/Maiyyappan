#include<stdio.h>
void main()
{
    int l,a[100],i,m,n;
    clrscr();
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    if(l%2==0)
    {   n=l/2;
        printf("%d",a[n]);
    }
    else
    {
        m=l/2+1;
        printf("%d",m);
    }
    
    
