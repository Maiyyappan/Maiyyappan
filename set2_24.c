#include <stdio.h>

int main()
{
    int i,count,c=0;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
         
                  c=1;
        }
    }
    if(c==1)
    {
        printf("no");
    }
    else 
    {
        printf("yes");
    }
    
    return 0;
}
