#include<stdio.h>

int is_Prime(int x);

int main()
{
    int n;
    scanf("%d",&n);

    if (is_Prime(n) == 1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Composite number\n");

    }
    return 0;
}

int is_Prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}