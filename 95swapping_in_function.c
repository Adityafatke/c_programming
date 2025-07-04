#include<stdio.h>
int swap(int *a,int *b)
{
    // int c=x+y;
    // x=c-x;
    // y=c-y;
    int c=*a;
    *a=*b;
    *b=c;




}
int main()
{
    int a,b;
    printf("enter a two number");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping%d",a);
    printf("\nbefore swapping%d",b);

    swap(&a,&b);
        printf("\nafeter swappin=%d",a);
    printf("\nafeter swappin=%d",b);


}