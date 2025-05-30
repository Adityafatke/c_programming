#include<stdio.h>
#include<math.h>
int main()
{
    int flag=0,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)            //this line reduce 89% of extra program execution which is good for time complexity
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