 #include <stdio.h>

int main()
{
int n,k,r,l=0;
scanf("%d%d",&n,&k);
while(n)
{
    r=n%10;
    if(r==k)
    {
        l++;
    }
    n=n/10;
}
printf("%d",l)
}
