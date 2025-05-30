#include <stdio.h>
int main()
{
    int cnt = 0, n, i;
    printf("enter a number");
    scanf("%d", &n);
    for (i = 1; i <= n ; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == n)
        printf("number is prime");
    else
        printf("not prime number");
}