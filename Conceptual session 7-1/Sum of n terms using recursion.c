#include<stdio.h>
int sum(int x);

int main()
{
    int n;
    scanf("%d",&n);
    int t = sum(n);
    printf("%d\n",t);
    return 0;
}

int sum(int x)
{
    if (x > 0)
    {
        return sum(x-1)+x;
    }

    return 0;
    
}