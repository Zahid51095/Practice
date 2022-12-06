#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int s = i * i ;
        printf("Number is : %d and Square of the %d is :%d\n", i,i,s);
    }
    
    return 0;
}