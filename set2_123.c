#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    clrscr();
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
        k=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==0)
        {
            printf("%d ",i);
        }
       }    
    }getch();     
}

