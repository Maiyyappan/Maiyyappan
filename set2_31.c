#include<stdio.h>
#include<string.h>
void main()
{
    int a,i,j,c=0,D=0;
  char str[10];
  printf("enter the string");
  scanf("%s",str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if(str[i]=='(')
    {
        c++;
  }
  else
  {
    D++;
  }
  }
  if(c==D)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  
}
