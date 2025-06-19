#include <stdio.h>
int main()
{
    int a[100];
    int n, i, flag, key;
    printf("enter a how many number yo want ");
    scanf("%d", &n);
    printf("which value you find");
    scanf("%d", &key);
    printf("enter a number");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 0;
            break;
        }
        if (flag == 0)
            printf("no is found");
        else
            printf("no is not found");
    }
}