#include<stdio.h>
int main()
{
    int a[100],i,j,key,n,flag=0;
    printf("enter a N");
    scanf("%d",&n);

    printf("enter a array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a number of searching");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
           if(key==a[i])
           flag=1;
    }
    if(flag==1)
        printf("number is found!!");
    else
    printf("number is not found");
 
}