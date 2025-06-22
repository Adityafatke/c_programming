#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;
    printf("enter a n");
    scanf("%d",&n);
    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
 }
}
printf("after bubble sort array=");
for(i=0;i<n;i++)
printf("%d",a[i]);


}