#include <stdio.h>

void print_even_numbers(int N);

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);
        print_even_numbers(N);
    }

    return 0;
}

void print_even_numbers(int N)
{
    int i, j, sum = 0;

    for (i = 2; i <= N; i += 2)
    {
        sum = 0;
        for (j = i; j <= i + 6; j += 2)
        {
            sum += j;

            if (sum > N)
            {
                break;
            }
        }

        if (sum == N)
        {
            for (j = i; j <= i + 6; j += 2)
            {
                printf("%d ", j);
            }
            break;
        }
    }
}