#include<stdio.h>
int main()
{
    int i,j,k,n,a[100];
    printf("enter a N");
    scanf("%d",&n);

    printf("enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)   //make only j=i+1 not more than that
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
    printf("after deleting all duplicates");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}