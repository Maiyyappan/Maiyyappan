#include<stdio.h>
#include<conio.h>
int main()
{
    char a[1000],b[1000];
    int i,j,c=0,len=0,m=0;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;b[j]!='\0';j++)
        {
          if(a[i]==b[j])
          c++;
          break;
        }
    }
    m=len-c;
    if(m==1en)
    printf("yes");
    else
    printf("no");
}
