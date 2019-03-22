#include <stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int b,c=0,d,i,j;
  clrscr();
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
  b++;
	if(b==10)
	c++;
	if(a[2]=='/' && a[5]=='/')
	c++;
	if(a[0]<=3)
	c++;
	if(a[1]<=9)
	c++;
	if(a[3]<=1)
	c++;
	if(a[4]<=2)
	c++;
	if(c==6)
	printf("yes");
	else
	printf("no");
  getch();
}
