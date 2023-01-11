#include<stdio.h>

float calculate(char op, int x, int y);

int main()
{
    char ch;
    int a,b;
    scanf("%c",&ch);
    scanf("%d %d", &a,&b);
    int ans = calculate(ch,a,b);
    printf("%d\n",ans);
    return 0;
}

float calculate(char op, int x, int y)
{
    if (op ==  '+')
    {
        return x + y;
    }
    else if (op == '-')
    {
        return x - y;
    }
    else if (op == '/')
    {
        return x/y;
    }
    else if (op == '*')
    {
        return x * y;
    } 
}