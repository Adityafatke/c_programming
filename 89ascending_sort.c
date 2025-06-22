#include<stdio.h>
int main()
{
    int i,j,temp,a[100],n;
    printf("enter how many number you want");
    scanf("%d",&n);
    printf("enter a element ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     printf("ascendingsorted array=");
     for(i=0;i<n;i++)
     printf("%d",a[i]);


}