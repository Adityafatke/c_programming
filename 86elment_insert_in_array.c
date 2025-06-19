#include <stdio.h>
int main()
{
    int a[100], n, i, j, key, pos;
    printf("how many no you want to number");
    scanf("%d", &n);
    printf("enter a number");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("enter a position");
    scanf("%d", &pos);
    printf("enter a key");
    scanf("%d", &key);

    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=key;
    n++;


    printf("sorted array\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}
