#include<stdio.h>
void main()
{ 
long int l,b[1000],i,j,d,m; 
clrscr();
scanf("%ld",&l); 
for(i=0;i<l;i++) 
{ 
scanf("%ld",&b[i]); 
} 
m=0; 
for(i=0;i<l;i++) 
{ 
for(j=i+1;j<l;j++) 
{ 
d=b[i]-b[j]; 
if(m>d) 
{ 
m=d; 
} 
} 
}  
printf("%ld ",m); 
}
