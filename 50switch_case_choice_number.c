#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp = 1, rev = 0, rem, c, i;
    printf("enter a number");
    scanf("%d", &n);
    printf(" \n 1 reverce \n 2 prime \n 3 perfect \n 4 palindrome \n 5 factorial \n 6 exit");
    printf("\n enter your choice");
    scanf("%d", &c);

    if (c == 6)
        return 0;
    switch (c)
    {

    case 1:
        while (n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        printf("reverce no=%d", rev);
        break;
        // reverce no program end

        // prime no program start
    case 2:
        for (i = 2; i <= 92; i++)
        {
            if (n % i == 0)
                temp = 0;
            break;
        }
        if (temp == 1)
            printf("number is prime");
        else
            printf("number is not prime");
        break;

        // prime no progrm end

        // perfect no program start

    case 3:
        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                c = c + i;
        }
        if (c == n)
            printf("number is perfect");
        else
            printf("number is not perfect");
        break;

        // perfect no program end

        // palindrome no program start
        temp = n;
        while (n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        if (temp == rev)
            printf("number is palindrome ");
        else
            printf("number is not palindrome");
        break;

        // palindrome end

        // factorial start

        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                printf("factorial of no=%d", i);
        }
        printf("%d", n);
        break;
    }
    return 0;
}