#include<stdio.h>

void main()
{
    int a[100],i,j,l;
    clrscr();
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='&';
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!='&')
        {
            printf("%d ",a[i]);
        }
    }
    getch();
}
