#include<stdio.h>
#include<string.h>
void main()
{
    int a,i,f,l,j,c=0;
    char str[15];
scanf("%d %d",&f,&l);
for(i=f;i<=l;i++)
{
    for(j=1;j<=i;j++)
    {
        if((j*j)==i)
        {
            c++;
        }
    }
    
}
printf("%d",c);
}
