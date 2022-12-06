#include<stdio.h>
int main()
{
    int n,w;
    int sum = 0;
    printf("Please enter num of passengers: ");
    scanf("%d",&n);
    int i = 0;
    while (i < n)
    {
       scanf("%d",&w);
       sum += w;
       i++;
    }
    printf("Total weight is %d kg",sum);
    
    return 0;
}