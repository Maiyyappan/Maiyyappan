#include<stdio.h>
void main()
{
    long int N,K,f=1,f1=1,i;
    float t;
    clrscr();
    scanf("%ld%ld",&N,&K);
    if(K<=n&&K<=10)
    {
        for(i=1;i<=N;i++)
        {
            f=f*i;
        }
        for(i=1;i<=(N-K);i++)
        {
            f1=f1*i;
        }
        t=f/f1;
        printf("%.0f",t);
           }
    
}
