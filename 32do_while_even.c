#include<stdio.h>
void main()
{
int i=1,no;
  printf("enter a no");
  scanf("%d",&no);
do {
    i++;
    (i%2==0) ? printf("\n even no =%d", i): printf("\n odd no =%d", i);
    } while (i<=no);
}