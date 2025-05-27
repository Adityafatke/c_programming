
#include<stdio.h>
int main()
{
    int i,no;
    printf(" enter n number");
    scanf("%d",&no);
    for(i=2;i<=no;i+=2)
    printf("\n even no =%d",i);
    printf("____________________________________________________________________________________________________________");
    for(i=1;i<=no;i+=2)
    printf("\n odd no =%d",i);
}