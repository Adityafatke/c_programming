#include<stdio.h>
int main()
{
    int i,j,key,n,a[100];
    printf("enter a N");
    scanf("%d",&n);

    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a key");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            for(j=i;j<n;j++)
            a[j]=a[j+1];

            n--;
            i--;
        }
    }
    printf("after element delition array=\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}