
#include<stdio.h>
int main()
{
   char ch;
   printf("enter a one char");
   scanf(" %ch",&ch);

   switch(ch)
   {
    case 'a'...'z':
    printf("small letter");
    break;

     case 'A'...'Z':
    printf("capital letter");
    break;

     case '0'...'9':
    printf("digit!!");
    break;
  
    default:printf("special symbol");
   }
}