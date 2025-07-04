#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,i,n,sum=0;
    printf("enter a n");
    scanf("%d",&n);

    a=(int*)calloc(n,sizeof(int));

    printf("enter a array elemet");
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum=sum+a[i];

     printf("array data sum=%d",sum);

    
   
}