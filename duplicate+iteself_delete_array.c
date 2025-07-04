#include<stdio.h>
int main()
{
    int i,j,n,a[100],key=0;
    printf("enter a n");
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
        for(j=0;j<n-1;j++)
        a[j]=a[j+1];
        
        n--;
        i--;
    }
}
    printf("after deleting no and its duplicate=");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
   }