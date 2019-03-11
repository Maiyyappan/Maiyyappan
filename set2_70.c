#include <stdio.h>
void main()
{

char a[100],b[10]=" Answer";
int l,i;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
    
a[l]=b[i];
 
l++;
}

a[l]='\0';
printf("%s",a)
   
}
