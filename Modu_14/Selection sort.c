#include <stdio.h>

int main()

{
    int N = 8;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[N];

    for (int i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    

    for (int j = 0; j < N; j++)
    {
        int min = ara[0];
        int min_ind = 0;

        for (int i = 0; i < N; i++)
        {
            if (ara[i] < min)
            {
                min = ara[i];
                min_ind = i;
            }
        }

        sorted_ara[j] = min;
        ara[min_ind] = 9999;

        for (int i = 0; i < N; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < N; i++)
    {
        printf("%d ",sorted_ara[i]);
           
    }
    
    

    return 0;
}