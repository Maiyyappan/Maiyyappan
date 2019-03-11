#include<stdio.h>
void main()
{
    int b[100000],n,i,m=1;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]<b[i+1])
        {
        m++;
        }
    }
    if(n==m)
    printf("yes");
    else
    printf("no");
}
getch();
}
