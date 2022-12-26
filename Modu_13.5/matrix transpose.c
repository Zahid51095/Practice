#include<stdio.h>
int main()
{
    int m,n,i,j,matrix[10][10],transpose[10][10];
    scanf("%d %d",&m,&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
        
    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
        
    }


    
    
    return 0;

}