#include<stdio.h>
int main()
{
    int n,i,x,p,q;
    scanf("%d",&n);
    int ara [n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&x);
    for ( i = 0; i < x; i++)
    {
        scanf("%d %d", &p, &q);
        ara[p] = ara[p] + q;

    }
    for ( i = 0; i < n; i++)
    {
       printf("%d ",ara[i]);
    }
    
    
    return 0;
}