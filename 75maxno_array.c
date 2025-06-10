#include<stdio.h>
int main()
{
    int a[10];
    int n,i,max=0;
    printf("enter a how many you want");
    scanf("%d",&n);
    printf("enter a numbers");
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   max=a[0];
   for(i=1;i<n;i++)
   {
    if(max<a[i])
    max=a[i];
   }
   printf(" max no=%d",max);


}

