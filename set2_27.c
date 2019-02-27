#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char str[15];
    scanf("%s",str);
    a=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=120)
        str[i]-=32;
        else
        str[i]+=32;
    }
    printf("%s",str);
}
