#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    char sent[100][100];

    for (i = 0; i < n; i++)
    {
        scanf("%s", sent[i]);
    }
    
    for (i = 0; i < n; i++)
    {

        printf("%s ", sent[i]);
    }

    return 0;
}