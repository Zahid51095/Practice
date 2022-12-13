#include<stdio.h>
int main()
{

    int i,j,m,n;
    scanf("%d", &m);
    for ( i = 1; i <= m; i++)
    {
        for ( j = i; j < m; j++)
        {
            printf(" ");

        }
        for ( n = 1; n <= i; n++)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }
    
    return 0;
}