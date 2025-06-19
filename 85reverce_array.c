#include<stdio.h>
int main()
{
    int i,temp=0, n, a[100];
    printf("enter how many number you want ");
    scanf("%d", &n);
    printf("enter array element");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

        for(i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
        printf("reverce array=");
         for (i = 0; i < n; i++)
         printf("\n%d",a[i]);
    }