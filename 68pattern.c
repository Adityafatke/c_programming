#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter a number");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        printf(" *");
        printf("\n");
    }
}
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *