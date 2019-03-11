    
#include <stdio.h>

int main()
{
int f,i=1;
scanf("%d",&f);
for(i=1;i<=f;i++)
{
    if(f%i==0)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}}
