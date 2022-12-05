#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b)
    {
        printf("A is bogger");
    }
    else if (b > a)
    {
        printf("B is bogger");
    }
    else
    {

        printf("They are equal");

    }
    
    
    return 0;
}