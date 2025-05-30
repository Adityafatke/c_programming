#include<stdio.h>
int main()
{
    int flag=0,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)            //this line reduce 50% of extra program execution which is good for time complexity
    {
        if(n%i==0)
        flag=1;
        break;
    }
    if (flag==0)
    printf("number is prime");
    else
   printf("number is not prime");
    
}