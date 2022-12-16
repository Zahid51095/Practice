#include<stdio.h>
int main()
{
    int i,n,moves = 0;
    int ara[200005];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    
    for ( i = 1; i < n; i++)
    {
        if (ara[i] < ara [i-1])
        {
            moves += ara[i-1] - ara[i];
            ara[i] = ara[i-1];
        }
        
    }
    printf("%d\n",moves);
    
    return 0;
}