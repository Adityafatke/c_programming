#include<stdio.h>
int main()
{
    int a[100],n,i,key,cnt=0;
    printf("enter a how much no you want");
    scanf("%d",&n);
    printf("enter a number");
    for ( i = 0; i <n; i++)
    scanf("%d",&a[i]);
    printf("enter a key");
    scanf("%d",&key);

    for ( i = 0; i <n; i++)
    {
        if (a[i]==key)      //mhanje key madhe dilela  number array madhr kiti velela aalela aahet tyachi count dakhavaycha 
        cnt++;
    }
    if (cnt==0)  
    printf("no is not found");
    else
    printf("number count is=%d",cnt);    
    
    
}