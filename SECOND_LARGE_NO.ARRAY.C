#include<stdio.h>
int main()
{
    int i,n,a[100],max,second;
    printf("enter a n");
    scanf("%d",&n);
    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    second=0;

    for(i=0;i<n;i++)
        {
            if(a[i]<=a[i+1])
            {
             second=max;
             max=a[i];
        if(a[i]>second&&a[i]!=max)
        second=a[i];
        }
       }
         printf("second largest number =%d",second);
}

