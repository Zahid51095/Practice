#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    int sum = 0;
    for ( i = 1; i <= n; i++)
    {
        sum =  sum + i;
    }
    printf("The sum of natural numbers upto %d terms is %d", n, sum);
    
    

    return 0;
}