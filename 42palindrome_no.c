#include <stdio.h>
int main()
{
    int temp = 0, n, rev = 0;
    printf("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == temp)
        printf("palindrome no");
    else
        printf("not palindrome no");
}