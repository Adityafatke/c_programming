
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a one char");
    scanf(" %c",&ch);

        ch=tolower(ch);
 
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("characher is vovel");
        break;
      
        default:printf("character is not vovel");
        
    }
}