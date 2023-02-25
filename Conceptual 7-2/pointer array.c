#include<stdio.h>

void view_array_size(int *array, int sz);

int main()
{
    int ara[] = {10, 20, 30, 40, 50};
    view_array_size(ara,5);
}

void view_array_size(int *array, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *(array+i));
    }
    
}