#include <stdio.h>

int main()
{
   char a[10],k;
   int i,c=0;
   scanf("%s %c",&a,&k);
   for(i=0;a[i]!='\0';i++)
   {
       if(k==a[i])
       {
           c++;
       }
   }
   printf("%d",c)
}
