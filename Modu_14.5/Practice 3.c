#include<stdio.h>
#include<string.h>

int main()

{
    char ch[27];
    scanf("%s",ch);
    int m = strlen(ch);

    int cost = 0;
    for (int i = 0; i < m; i++)
    {
        cost += ch[i] - 96;
    }
 
    int t, p = 0;
    t = cost;
    while (cost)
    {
        cost /= 2;
        p++;
    }
 
    int v = 1;

    for (int i = 1; i < p; i++)
    {
        v *= 2;
    }
 
    if (t == v)
    {
        printf("YES\n");
        printf("Cost = 2^%d", p - 1);
    }
    else
    {
        printf("NO\n");
    }
 
    return 0;
}
    
