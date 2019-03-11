#include <stdio.h> 
void main()
{ 
int n,k,i,j,x,d=0;
clrscr();
scanf("%d",&n);
scanf("%d",&k);
int a[n+k];
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]); 
} 
for(i=n;i<n+k;i++)
{ 
scanf("%d",&a[i]); 
d++; 
x=a[0]; 
for(j=1;j<n+d;j++)
{ 
if(x<a[j]) 
x=a[j]; 
} 
printf("%d ",x); 
} 
}
