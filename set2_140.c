#include <stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,j,sum;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          sum=0;
           for(j=0;j<=i;j++)
              sum=sum+a[j];
            printf("%d ",sum);
        }
        else
         printf("%d ",a[i]);
   }getch();
}
