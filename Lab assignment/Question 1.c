#include<stdio.h>

int main()
{
    int N, sum = 0, i;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if ((i-1)/3 % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;

        }
    }

    printf("%d", sum);
    
    return 0;
}