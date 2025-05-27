#include <stdio.h>
int main()
{
    int i, no, sum = 0;
    printf("enter a number");
    scanf("%d", &no);
    for (i = 0; i <= no; i++)
        sum += i;
    printf("%d", sum);
}