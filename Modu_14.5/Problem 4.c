#include<stdio.h>

int main()

{
    int a[10][10], b[10][10], product[10][10];;
    int arows, acolumns, brows, bcolumns;
    int i,j,k;
    int sum = 0;

    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    
    printf("Enter the elements of matrix a: ");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    

    printf("Enter the rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns)
    {
        printf("Sorry We will not be able to multiply the two matrices.");
    }
    else
    {
    printf("Enter the elements of matrix b");

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    }

    printf("\n");

    
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            for (int k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
        
    }

   
    printf("The resultant matrix : \n");

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
        
    }

    
    return 0;
}