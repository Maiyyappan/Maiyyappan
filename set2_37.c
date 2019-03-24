#include<stdio.h>
void main()
{
    char a[30];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>96)
		{
			a[i]=a[i]-32;
		}
		else if(a[i]<91)
		{
			a[i]=a[i]+32;
		}
	}
    printf("%s",a);}
