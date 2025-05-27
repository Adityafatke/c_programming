#include<stdint.h>
int main()
{
    int i=1,no;
    printf("enter a number");
    scanf("%d",&no);
    while (i<=no)
   (i%2==0) ? printf("\n even no =%d", i): printf("\n odd no =%d", i);
}