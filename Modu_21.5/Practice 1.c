#include <stdio.h>

void dodo(int n);

int main()
{
    int a;
    scanf("%d", &a);
    dodo(a);

    return 0;
}


void dodo(int n)
{
     if (n > 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }

    if (n < 0)
    {
        for (int i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
}