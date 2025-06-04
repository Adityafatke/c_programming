#include<stdio.h>
int main()
{
    int i,j,n,p=2;
    printf("enter a no");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j=1; j <=i; j++)
        {
           printf(" %d",p);
           p+=2;
        }
        printf("\n");
        
    }
    
}