#include <stdio.h>

void pattern(int n);

int main()
{
    int a;
    scanf("%d",&a);
    pattern(a);

    return 0;
}

void pattern(int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(n*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }


}