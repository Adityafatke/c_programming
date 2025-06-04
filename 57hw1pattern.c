#include<stdio.h>
int main()
{
    char i,j,ch;
    printf("enter a char");
    scanf("%c",&ch);

    for(i='A';i<=ch;i++)
    {
        for ( j = 'A'; j<=i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
        

    }
}