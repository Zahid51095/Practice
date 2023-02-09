#include <stdio.h>

int isNice(int *arr, int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = *(arr + i);
        int digits;
        while (num > 0)
        {
            digits = num % 10;
            num /= 10;
        }
        if (digits == 7)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = isNice(arr, n);
    if (result)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }
    return 0;
}