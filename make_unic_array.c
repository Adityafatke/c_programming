#include<stdio.h>
int main()
{
    int i,j,k,a[100],n;
    printf("enter a n");
    scanf("%d",&n);
    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                a[k]=a[k+1];

                n--;
                j--;
            }
        }
    }
    printf("unique array=");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}