#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    while (n != m)
    {
        printf("%d ",n);
        n++;
        if(n == 24)
        {
            n = 0;
        }
        if (n == m)
        {
             printf("%d ",n);
        }
        
    }
    return 0;
}