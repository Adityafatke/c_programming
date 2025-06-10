#include<stdio.h>
#include<ctype.h>
int main()
{
    char i,j,ch;
    printf("enter a capital char");
    scanf("%c",&ch);
    tolower(ch);

    for(i='A';i<=ch;i++)
    {
        for ( j = 'A'; j<i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
        

    }
}