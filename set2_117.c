#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
printf("%s-",a[i]);
}
getch();
}
