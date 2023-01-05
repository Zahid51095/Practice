#include<stdio.h>

int seven_present(int n);
int digi_sum(int n);
int last_digi_prime(int n);

int main()

{
    int n;
    scanf("%d", &n);

    if (seven_present(n) == 1 && digi_sum(n) > 10 && last_digi_prime(n) == 1)
    {
        printf("Zahid's Number\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}

int seven_present(int n)
{
    while (n > 0)
    {
        if(n % 10 == 7)
        return 1;
        n /= 10;
    }
    return 0;
}

int digi_sum(int n)
{
    int summ = 0;
    while (n > 0)
    {
        summ += (n%10);
        n /= 10;
    }

    return summ;
    
}

int last_digi_prime(int n)
{
    int ld = n%10;

    if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}