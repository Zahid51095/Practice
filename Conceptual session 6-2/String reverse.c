#include<stdio.h>

int get_string_size(char ch[]);

void string_reverse(char ch[]);

void solve();

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }
    
    return 0;
}

int get_string_size(char ch[])
{
    int size = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        size++;
    }
    return size;
    
}

void string_reverse(char ch[])
{
    int len = get_string_size(ch);
    for (int i = 0, j = len - 1; i < len/2; i++, j--)
    {
        char tmp = ch[i];
        ch[i] = ch[j];
        ch[j] = tmp; 
    }
    
}

void solve()
{
    char c [100];
    scanf(" %s", c);

    string_reverse(c);

    printf("%s\n", c);


}



