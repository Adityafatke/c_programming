#include <stdio.h>
#include <math.h>
int rev = 0, rem = 0, temp, i;

int fibonacci(int fib)
{
    int a = 0, b = 1, c;
    if (fib == a)
        printf("\n%d", a);
    else if (fib == b)
        printf("\n%d%d", a, b);
    else if (fib > 2)
    {
        printf("\n%d%d", a, b);

        for (i = 0; i < fib; i++)
        {
            c = a + b;
            printf("\n%d", c);
            a = b;
            b = c;
        }
    }
}
//---------------------------fibonacci number end----------------------------------------------------

int perfect(int pn)
{
    int sum = 0;
    for (i = 1; i < pn / 2; i++)
    {
        if (pn % i == 0)
            sum += i;
    }
    if (sum == pn)
        printf("\nnumber is perfect");
    else
        printf("\nnumber is not perfect");

        fibonacci(pn);
}
//---------------------------perfect number end----------------------------------------------------

int palindrome(int pn)
{
    temp = pn;
    while (pn > 0)
    {
        rem = pn % 10;
        rev = rev * 10 + rem;
        pn /= 10;
    }
    if (temp == rev)
        printf("\nnumber is palindrome");
    else
        printf("\nnumber is not palindrome");

    perfect(temp); // perfect function call
}
//---------------------------palindrome number end----------------------------------------------------
int armstrong(int am)
{
    int cnt = 0, result = 0;
    temp = am;
    while (am > 0)
    {
        cnt++;
        am /= 10;
    }
    am = temp;
    while (am > 0)
    {
        rem = am % 10;
        result = result + pow(rem, cnt);
        am /= 10;
    }
    if (result == temp)
        printf("\nnumber is armstrong");
    else
        printf("\nnumber is not armstrong");

    palindrome(temp); // palindrome function call
}
//---------------------------armstrong number end----------------------------------------------------
int prime(int pn)
{
    int flag = 0;
    for (int k = 2; k < pn / 2; k++)
    {
        if (pn % k == 0)
            flag = 1;
    }
    if (flag == 0)
        printf("\nnumber is prime");
    else
        printf("\nnumber is not prime");

    armstrong(pn); // armstrong function call
}
//---------------------------prime number end----------------------------------------------------

int reverce(int n)
{
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("\nreverse no =%d", rev);
    n = temp;

    prime(n); // prime function call
}
//---------------------------reverce number end----------------------------------------------------

int main()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    reverce(i); // reverce function call

    return 0;
}
