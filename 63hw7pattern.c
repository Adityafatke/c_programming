#include <stdio.h>
#include <ctype.h>
int main()
{
    char p = 'a';
    int i, j, n;
    printf("enter a number");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c%c", toupper(p), tolower(p));
            p++;
        }
        printf("\n");
    }
}
// output=
// Aa
//  Bb Cc
//  Dd Ee Ff
//  Gg Hh Ii Jj
//  Kk Ll Mm Nn Oo