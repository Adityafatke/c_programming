#include<stdio.h>
int main()
{
    int i,j,n,a[100],key;
    printf("enter a n");
    scanf("%d",&n);
    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a number for delition");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            for(j=i;j<n;j++)
            a[j]=a[j+1];

            n--;
            break;
        }
    }
    printf("array after element delition");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}