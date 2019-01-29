#include <stdio.h>
#include<conio.h>

int main()
{
    int a,mul=1,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    { 
        mul=mul*i;
        
    }
    printf("%d ",mul);
    return 0;
}
