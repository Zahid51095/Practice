#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (b > a && c > a)
    {
        printf("B and C both are bigger");
    }
    else if (a > b && c > b)
    {
        printf("A and C both are bigger");
    }
    else if (a > c && b > c)
    {
        printf("A and B both are bigger");
    }
    return 0;
}