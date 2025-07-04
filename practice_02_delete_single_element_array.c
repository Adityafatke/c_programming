#include<stdio.h>
int main()
{
    int i,j,n,a[100],key;
    printf("enter a N");
    scanf("%d",&n);

    printf("enter a array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a number for delation");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
             for(j=i;j<n-1;j++)
                a[j]=a[j+1];   //a of j ke index var a of j+1 chi value taka

                 n--;
                 break;
        }
    }
  printf("after element deletion");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    printf("hiii");
}