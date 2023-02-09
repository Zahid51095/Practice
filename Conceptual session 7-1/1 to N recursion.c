#include <stdio.h>
void display(int x);

int main()
{
    int n;
    scanf("%d", &n);
    display(n);

    return 0;
}

void display(int x)
{
    if (x > 0)
    {
        display(x - 1);
        printf("%d ", x);
       
    }
}