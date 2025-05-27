#include <stdio.h>
void main()
{
    int i, no;
    printf("enter a number");
    scanf("%d",&no);
    for (i =1; i <= no; i++)
        (i%2==0) ? printf("\n even no =%d", i): printf("\n odd no =%d", i);        
}