#include <stdio.h>

int main()
{
   char a[10],k;
   int i;
   scanf("%s %c",&a,&k);
   for(i=0;a[i]!='\0';i++)
   {
       if(k==a[i])
       {
           printf("%d",i+1);
           break;
       }
   }}
    
