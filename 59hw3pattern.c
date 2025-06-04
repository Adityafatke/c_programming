
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number");
    scanf("%d",&n);

    for  (i =2; i <=n; i+=2)
    {
        for ( j =1; j <=i; j++)
        {
            printf(" *");
        }
        printf("\n");
        
    }
    
}