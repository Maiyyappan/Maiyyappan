#include <stdio.h>
void main()
{
int a,j,t;
clrscr();
scanf("%d",&a);
int a1[a];
for(j=0;j<a;j++)
{
    scanf("%d",&a1[j]);
}


for(j=0;j<a-1;j=j+2)
{
   t=a1[j];
    a1[j]=a1[j+1];
    a1[j+1]=t;
    }
}
for(j=0;j<a;j++)
{
    printf("%d ",a1[j]);
}
}
