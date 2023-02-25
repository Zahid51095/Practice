#include<stdio.h>

int main()
{

    int *a = 20;

    int *b = &a;

    *b = 400;

    printf("%d\n", a);

    printf("%d\n", *b);


    return 0;
}