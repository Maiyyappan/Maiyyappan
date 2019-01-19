int main()
{
 int a,i;
 clrscr();
 scanf("%d",&i);
 scanf("%d",&a);
 while(i!=0)
 {
     if(a%2==0)
 {
     printf("Even");
 }
 else
 {
    printf("Odd"); 
 }
 i--;
 }
 getch();
 return 0;
}
