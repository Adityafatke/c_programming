
#include<stdio.h>
int main()
{
    int a;
    int b;
printf("enter a two no");
scanf("%d%d",&a,&b);
    (a>b)?printf("max no=%d",a):printf("min no =%d",b);  //using ternary operator 

    printf("\nmax no=%d",(a>b)?a:b); //single line logic
}
    