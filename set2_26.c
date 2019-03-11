#include <stdio.h>
void main() 
{	
char a[20];
	int i;
  clrscr();
scanf("%[^\n]",&a);	
for(i=0;a[i]!='\0';i++)	
{		
if(a[i]==' ')		
{			
a[i]='$';			
break;		
}	}
for(i=0;a[i]!='\0';i++)	
{		
if(a[i]==' ')		
{			
a[i]='+';		
}	}	
for(i=0;a[i]!='\0';i++)	
{	
if(a[i]=='$')
	{		
a[i]=' ';	
}	
if(a[i]!='+')	
{	
printf("%c",a[i]);	
}	
}
}
