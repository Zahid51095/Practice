#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, count = 0;
    char s[101];
    scanf("%d", &n);
    scanf("%s", s);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(s[i] == s[j])
                break;
        }
        if(i == j)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}