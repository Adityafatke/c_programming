
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three no");
    scanf("%d%d%d",&a,&b,&c);
   b=(a>b)?a:b;
   b=(c>b)?c:b;
   printf("max no is =%d",b);
}