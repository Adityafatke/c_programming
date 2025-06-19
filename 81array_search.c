#include <stdio.h>
int main()
{
    int i, j, n, a[100], low, mid, high, key, flag;
    printf("enter how many number you enter");
    scanf("%d", &n);
    printf("enter a number");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enetr a number for serch");
    scanf("%d", &key);
    
    flag = 0;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag)
        printf("found");
    else
        printf("not found");
    return 0;
}