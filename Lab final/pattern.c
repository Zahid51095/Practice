#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i % 2 == 1)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}