#include<stdio.h>

int gcd(int m, int n);

int lcm(int m, int n);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a,b);
    int ans2 = lcm(a,b);
    printf("GCD is %d\n",ans);
    printf("LCM is %d\n",ans2);
    
    return 0;
}

int gcd(int m, int n)
{
    int l,s;
    if (m > n)
    {
        l = m;
        s = n;
    }
    else
    {
        l = n;
        s = m;

    }
    for (int i = s; i >= 1; i--)
    {
        if (l % i == 0 && s % i == 0)
        {
            return i;
        }
        
    }
    
}

int lcm(int m, int n)
{
    return (m * n) / gcd(m,n);
}