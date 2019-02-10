#include<stdio.h>
void main()
{
char str[30],str1[40];
int i,j;
gets(str);
gets(str1);
while(str[i]!='\0')
{
    i++;
    
}
while(str1[j]!='\0')
{
    str[i]=str1[j];
    i++;
    j++;

}

puts(str);
}
