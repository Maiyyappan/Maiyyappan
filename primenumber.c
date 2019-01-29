#include <stdio.h>
#include<conio.h>

int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {if(a%i==0)
    {
        c++;
    }
    }
    if(c<1)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }
    return 0;
}
