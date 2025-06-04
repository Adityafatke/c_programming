
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char i,j,n;
    printf("enter a character");
    scanf("%c",&n);
    toupper(n);
    

    for  (i ='A'; i <=n; i++)
    {
        for ( j ='A'; j <=i; j++)
        {
            printf("%c",i);
        }
        printf("\n");
        
    }
    
}