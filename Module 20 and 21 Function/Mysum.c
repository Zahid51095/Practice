#include<stdio.h>


int mySum(int a,int b)
{
    printf("Adding two numbers .....\n");
    return a + b;

}

int main()
{
    int x,y;
    x = mySum(11,15);
    printf("%d\n", x);

    y = mySum(10,20);
    printf("%d\n", y);

    return 0;
}