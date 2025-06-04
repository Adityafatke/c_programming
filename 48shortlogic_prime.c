#include <stdio.h>
#include <math.h>
int main()
{
    int flag = 1, i, n;
    printf("enter a number");
    scanf("%d", &n);

    if (n % 2 == 0 || n % 3 == 0)
        flag = 0;

    else
    {
        for (i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("no is prime");
    else
        printf("not prime");
}