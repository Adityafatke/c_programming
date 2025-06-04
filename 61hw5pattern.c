#include<stdio.h>
int main()
{
    int i,j,n,p=1;

    printf("enter a number");
    scanf("%d",&n);

    for ( i = 2; i <=n; i++)
    {
     for ( j = 1; j<i; j++)
     {
        printf("%d",p++);
        
     }
       printf("\n");
 }
    
}