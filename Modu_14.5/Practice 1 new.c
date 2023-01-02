#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s1[100];
    char store[1000];
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s1);
        for (int j = 0; j < strlen(s1); j++)
        {
            store[index] = s1[j];
            index++;
        }
        store[index] = ' ';
        index++;
    }
    store[index] = '\0';
    printf("%s", store);

    return 0;
}
