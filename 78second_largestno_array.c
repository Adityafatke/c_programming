#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n, max, second, a[100];
    printf("enter a how many no u want");
    scanf("%d", &n);
    printf("enter a number :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
   
   second=0;
    for (i = 1; i < n; i++)
    {
        if (max <= a[i])
        {
            second = max;
            max = a[i];
        }
        else if (a[i] > second && a[i] != max)
            second = a[i];
    }
    printf("2nd largest number of array=%d", second);
    return 0;
}