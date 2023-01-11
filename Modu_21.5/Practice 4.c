#include<stdio.h>

void onlyeven(int x);

int main()
{
    int n;
    scanf("%d",&n);
    onlyeven(n);
    return 0;
}

void onlyeven(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ",i);
        }
        
    }
    
}