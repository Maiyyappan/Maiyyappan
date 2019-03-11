#include<stdio.h>
void main()
{
int a,o=0,base=1,rem;
scanf("%d",&a);
while(a)
{
rem=a%8;
o=o+rem*base;
a=a/8;
base=base*2;
}
printf("%d",o);

}
