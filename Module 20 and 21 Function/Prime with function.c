#include<stdio.h>

int myPrime(int x);

int main()
{
    int a;
    scanf("%d", &a);

    int ans = myPrime(a);

    if (ans == 1)
    {
        printf("The number is prime.\n",ans);
    }
    else
    {
        printf("The number is not prime.\n",ans);
    }
   

    return 0;
}


int myPrime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }

    for (int  i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        
    }
    
    return 1;
    
    
    
}