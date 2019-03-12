#include<stdio.h>
void main()
{
    int m,a[100],i,j,n,x=0;
    clrscr();
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            n=(a[i])&(a[j]);
            if(n>x)
            {
                x=n;
            }
        }
    }
    printf("%d",x);
   
}
