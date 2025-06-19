#include<stdio.h>
int main()
{
    int i,j,key,a[100],n;
    printf("enter how many number you want");
    scanf("%d",&n);
    printf("enter a element ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     printf("enter a key");
     scanf("%d",&key);

     for ( i = 0; i <n; i++)
     {
        if(key==a[i])  //jevha key chi value and a[i] chi value match hoiel tevhach for loop madhe enter hote
        {
            for(j=i;j<n-1;j++)  //j madhi i chi value save hote
            a[j]=a[j+1];

            n--;
            i--;   //hi line back to back element jari aale tari delete karto because to ek step mage joto and then parat check karto
        }
     }
     printf("after deletion of element");
     for(i=0;i<n;i++)
     printf("%d",a[i]);

     return 0;
     
}