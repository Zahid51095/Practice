#include <stdio.h>
int main()
{
    int row = 3, col = 3, p,a1,b1;
    int matrix[row + 1][col + 1];
    scanf("%d", &p);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            matrix[i][j] = 0;
        }
    }

  for (int j = 1; j <= p; j++)
        {
            scanf("%d %d", &a1, &b1);
            matrix[a1][b1] = 1;
        }

    int count = 0;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    int a =  (row * col) - p;

    printf("Total empty cells- %d\n", a );

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (matrix[i][j] == 0)
            {
                printf("%d %d", i, j);
                printf("\n");
            }
        }
    }

    return 0;
}