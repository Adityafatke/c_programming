
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter a three no");
    scanf("%d%d%d",&a,&b,&c);
    printf("max no is =%.0f",fmax(a,(fmax(b,c))));
} 