#include<stdio.h>
int main()
{
    int a[100], b[100], n1, n2;
    int uni[200], un = 0, intersection[100], in = 0;
    int i, j, k;

    printf("enter size of n1\n");
    scanf("%d", &n1);
    printf("enter elements for array n1\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("enter size of n2\n");
    scanf("%d", &n2);
    printf("enter elements for array n2\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);  // 🛠️ FIXED: added &

    // Remove duplicates from array a
    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n1 - 1; k++)
                    a[k] = a[k + 1];

                n1--;
                j--;
            }
        }
    }    // Remove duplicates from array b
    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (b[i] == b[j])
            {
                for (k = j; k < n2 - 1; k++)
                    b[k] = b[k + 1];

                n2--;
                j--;
            }
        }
    }

    // Copy a[] to uni[]
    for (i = 0; i < n1; i++, un++)
        uni[un] = a[i];

    // Copy b[] to uni[]
    for (i = 0; i < n2; i++, un++)
        uni[un] = b[i];

    // Find intersection
    in = 0;
    for (i = 0; i < n1; i++)
    {
        for (j = n1; j < un; j++)
        {
            if (uni[i] == uni[j])
            {
                for (k = j; k < un - 1; k++)
                    uni[k] = uni[k + 1];

                un--;
                j--;

                intersection[in] = uni[i];
                in++;
            }
        }
    }

    // Print union
    printf("union: ");
    for (i = 0; i < un; i++)
        printf("%d ", uni[i]);  // 🛠️ FIXED: was wrongly using un[i]

    // Print intersection
    if (in > 0)
    {
        printf("\nintersection: ");
        for (i = 0; i < in; i++)
            printf("%d ", intersection[i]);
    }

    return 0;
}
