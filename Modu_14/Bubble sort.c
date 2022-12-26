#include <stdio.h>

int main()

{
    int N = 8;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[N];

    for (int i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < (N - 1); i++)
        {
            if (ara[i] > ara[i + 1])
            {
                int temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
