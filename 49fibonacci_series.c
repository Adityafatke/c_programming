#include<stdio.h>
int main()
{
    long int a,b,c,n,i;
    a=0;
    b=1;
    printf("enter a number");
    scanf("%ld",&n);
    if(n==1)
    printf("  %ld   ",a);

    else if(n==2)
    printf("%ld %ld",a,b);
                                 // addition of privious two will be the next
    else if (n>2)
    {
        printf("%ld %ld",a,b);
        for(i=2;i<n;i++)
        {
            c=a+b;
            printf(" \n %ld",c);
            a=b;
            b=c;
        }
    }
    
}