
#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("enter a number");
    scanf("%d",&n);

    while(n>0)
    {
     cnt++;
     n=n/10;
    }
    printf("\n count  digit %d",cnt);
}