#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n||i==1||j==1||j==n)
            printf(" * ");
            else
            printf("   ");
        }
            printf("\n");
    }   
}