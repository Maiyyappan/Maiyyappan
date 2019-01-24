#include <stdio.h>
#include<conio.h>
void main()
{   int i=0,k=0,count=0;
    char a[10000],b[10000];
    clrscr();
    scanf("%s",a);
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count;i>=0;i--)
    {
        b[k]=a[i];
        k++;
    }
    b[k]='\0';
    
    for(i=0;i<=count;i++)
    {   printf("%c",b[i]);    
    }
    getch();

}
