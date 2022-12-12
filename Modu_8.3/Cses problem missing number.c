#include<stdio.h>
int main()
{
    int N,x;
    int ara [200001];
    scanf("%d",&N);
    for (int i = 1; i < N; i++)
    {
       scanf("%d",&x);
       ara [x] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        if (ara[i] == 0)
        {
            printf("The missing number is %d\n",i);
        }
        
    }
    
     

    return 0;
}