#include<stdio.h>

int myGcd(int x, int y);

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);

    int ans = myGcd(a,b);
    printf("The gcd is %d\n",ans);

    return 0;
}



int myGcd(int x, int y)
{
    for (int i = x; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
        
    }
    

}

