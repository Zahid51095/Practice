#include <stdio.h>
int swap(int a, int b);
int main()
{
    int x, y;
    x = 10;
    y = 20;
    swap(x, y);
    printf(" x = %d and y = %d", x, y);
}
int swap(int a, int b)
{
    a = 20;
    b = 10;
}