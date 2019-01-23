#include<stdio.h>
#include<conio.h>
int main() 
{
   char a;
   clrscr();
   scanf("%c",&a);
   if((a>'a'&&a<'z')||(a>'A'&&a>'Z'))
   {
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='o'||a=='O'||a=='I'||a=='U'||a=='u')
   {
       printf("Vowel");
   }
      else 
   {
       printf("consonent");
   }
   }
   else{
       printf("Invalid");
   }

 getch();
}
