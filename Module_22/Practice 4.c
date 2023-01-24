#include<stdio.h>

int add_them(int n, int nums[]);

int main()
{
    int ara[] = {5, 10, 15, 20};

    int summ = add_them(4,ara);
    printf("The sum is %d\n",summ);
    return 0;
}


int add_them(int n, int nums[])
{
    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += nums[i];
    }

    return summ;
    
}