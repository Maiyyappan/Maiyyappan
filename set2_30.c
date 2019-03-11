#include<stdio.h>
int main()
{ 
char a[100],b[100]; 
int i,n,l,m=0,c=0,j; 
scanf("%s %s",a,b); scanf("%d",&n); 
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(j=0;a[j]!='\0';j++)
{
m++;
}
if(l==m) 
{ 
for(i=0;i<l;i++) 
{ 
if(a[i]!=b[i]) 
{ 
c++; 
} 
} 
if(c==1) 
printf("yes");  
else 
printf("no");  
} 
}
