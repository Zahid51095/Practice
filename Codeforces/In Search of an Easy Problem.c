#include <stdio.h>
int main()
{
    int n, i;
    int ara[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (ara[i] == 1)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("EASY\n");
    }
    else
    {
        printf("HARD");
    }

    return 0;
}