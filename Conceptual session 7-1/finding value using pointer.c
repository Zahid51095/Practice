#include <stdio.h>
int main()
{
    int ara[5] = {5, 10, 15, 20, 25};

    int *ptr = &ara;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}