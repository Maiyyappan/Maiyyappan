#include<stdio.h>
void main()
{
char a[10];
int j;
clrscr();
scanf("%[^\n]",&a);
a[0]=a[0]-32;
for(j=0;a[j]!='\0';j++)
{
if(a[j]==' ')
{
a[j+1]=a[j+1]-32;
}
}
printf("%s",a);
}
