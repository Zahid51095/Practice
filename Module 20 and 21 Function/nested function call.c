#include<stdio.h>
#include<math.h>


int absolute(int x);
float f(int x, int y);

int main()
{
    int  a,b;
    scanf("%d %d", &a, &b);
    float ans = f(a,b);
    printf("%f",ans);
    return 0;
}

float f(int x, int y)
{
    int tempans = absolute(x-3) + (y+4) * (y+4);
    return sqrt(tempans);
}

int absolute(int x)
{
    if (x > 0)
    {
        return x;
    }
    else
    {
        return (-1) * x;
    }
    
}
