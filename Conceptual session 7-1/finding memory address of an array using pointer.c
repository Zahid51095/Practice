#include <stdio.h>
int main()
{
    int ara[5] = {5, 10, 15, 20, 25};
    int *ptr = &ara;

    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    ptr++;
    printf("%p\n", ptr);
    ptr++;

    return 0;
}