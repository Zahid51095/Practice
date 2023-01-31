#include <stdio.h>

int isDivisibleBy3(int n)
{
    if (n % 3 == 0)
    {
        return 1;
    }
    return 0;
}

int isDivisibleBy5(int n)
{
    if (n % 5 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count3 = 0;
    int count5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (isDivisibleBy3(arr[i]))
        {
            count3++;
        }
        else if (isDivisibleBy5(arr[i]))
        {
            count5++;
        }
    }

    int total_count = count3 + count5;
    if (count3 == 0 && count5 == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", total_count);
    }
    return 0;
}