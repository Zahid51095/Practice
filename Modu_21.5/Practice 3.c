#include<stdio.h>

int aftersum(int x);

int main()
{
    int n;
    scanf("%d",&n);
    int y = aftersum(n);
  
    printf("%d ",y);
 
    return 0;
}

int aftersum(int x)
{
    int summ = 0;
    int ara[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&ara[x]);
        summ += ara[x] % 10 + ara[x] / 1000;
    }
    return summ;
    
}