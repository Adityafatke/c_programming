#include<stdio.h>
int main()
{
    int i,n,a[100],flag=0,key=0;
    printf("enter a n");
    scanf("%d",&n);
    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a key");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
       flag=1;
    }
    if(flag==1)
    printf("no is found");
    else
    printf("no is not found");
}