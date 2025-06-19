#include <stdio.h>
int main()
{
    int a[100];
    int i, n, min;
    printf("enter a how many no u want");
    scanf("%d", &n);
    printf("enter a number");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
  
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("minimum no=%d", min);
}
