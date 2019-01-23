int main() 
{
   int x;
   clrscr();
   scanf("%d",&x);
   if(x%2==0)
   {
       printf("Even");
   }
   
   else if(x<0)
   {
       printf("Invalid");
   }else if(x%2!=0)
   {
       printf("Odd");
   }
 getch();
}
