#include <stdio.h>
int main()
{
    int i, j, n, k, a[100];
    printf("enter how many number you want ");
    scanf("%d", &n);
    printf("enter array element");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }
        }
    }
    printf("after deleted array element");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);

}