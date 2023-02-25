#include <stdio.h>

int total_sum(int n, int arr[])
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        if ((i % 2 == 0 && arr[i] % 2 == 0) || i % 2 != 0 && arr[i] % 2 != 0)
        {
            sum += i + arr[i];
        }
    }
    return sum;
}

int main()
{
    int n, i, arr[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = total_sum(n, arr);
    printf("%d", result);
    return 0;
}