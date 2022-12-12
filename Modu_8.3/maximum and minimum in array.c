#include<stdio.h>
int main()
{
    int N = 6;
    int ara [N];
    for (int i = 0; i < N; i++)
    {
       scanf("%d",&ara[i]);
    }
    int m = ara[0];
    for ( int i = 0; i < N; i++)
    {
        if (ara[i] > m)
        {
            m = ara[i];
        }
        
    }
    printf("The maximum value is %d",m);
    
}