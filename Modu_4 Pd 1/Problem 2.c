#include<stdio.h>
int main()
{
    int i;
    printf("The first 10 natural numbers are:\n");
    for (i = 1; i <= 10; i++)
    {
      printf("%d ",i);
    }
    printf("\n");
    int sum = 0;
    for ( i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d", sum);
    
    
    return 0;
}