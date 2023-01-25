#include<stdio.h>

int get_string_size(char s[]);

void solve(void);

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }
    
}

int get_string_size(char s[])
{
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        size++;
    }
    return size;

}

void solve(void)
{
    char str[100];
    scanf(" %s", str);

    int string_size = get_string_size(str);

    printf("%s This word size = %d\n", str, string_size);
}