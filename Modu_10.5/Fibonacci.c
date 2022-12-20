#include<stdio.h>

int main()
{
    int a=0, b=1, c, i, terms;

    scanf("%d", &terms);

    for(i=1; i<=terms; i++)
    {
        printf("%d ", a);

        c = a + b; 
        a = b;     
        b = c;     
       
    }

    return 0;
}