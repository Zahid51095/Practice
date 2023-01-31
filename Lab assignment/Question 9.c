#include<stdio.h>

int is_prime(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

float find_average_of_even(int *arr, int n)
{
    int i, sum = 0, count = 0;
    for(i=0; i<n; i++)
    {
        if(*(arr+i)%2 == 0)
        {
            sum += *(arr+i);
            count++;
        }
    }
    if(count == 0)
        return 0;
    return (float)sum/count;
}

int main()
{
    int n, i, arr[100], count = 0;
    float avg;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
    {
        if(is_prime(arr[i]))
            count++;
    }
    printf("Prime numbers: %d\n", count);
    avg = find_average_of_even(arr, n);
    if(avg == 0)
        printf("There are no even numbers in the array.\n");
    else
        printf("Average of all even integers: %.2f\n", avg);
    return 0;
}