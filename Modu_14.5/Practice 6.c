#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int grid[n + 1][n + 1];
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= n;j++)
            scanf("%d", &grid[i][j]);
 
    for (int i = 1;i <= n;i++)
    {
        printf("row-%d and column-%d = ", i, i);
        for (int j = 1;j <= n;j++)
        {
            if (i != j)
                printf("%d ", grid[i][j]);
        }
        for (int j = 1;j <= n;j++)
        {
            if (i != j)
                printf("%d ", grid[j][i]);
        }
        printf("\n");
    }
    return 0;
}