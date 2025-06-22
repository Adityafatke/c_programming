#include<stdio.h>
int main()
{
    int i,j,n,a[100],key;
    printf("enter how many number you want");
    scanf("%d",&n);
    printf("enetr a number");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a key");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            for(j=0;j<n-1;j++)
                a[i]=a[j+1];

                n--;
                break;
        }

    }
    printf("after deleting single element=");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}