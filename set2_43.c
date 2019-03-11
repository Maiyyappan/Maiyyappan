    
#include<stdio.h>
void main() 
{
   char a1[100],a2[100];
   int i,n=0,l=0,k;

   scanf("%s",a1);
   scanf("%s",a2);
   for(i=0;a2[i]!='\0';i++)
   {
       l++;
   }
   for(i=0;a[i]!='\0';i++)
   {
       for(k=0;b[k]!='\0';k++)
       {
       if(b[k]==a[i])
       n++;
   }}
   if(n==l)
   printf("yes");
   else
   printf("no");
}
