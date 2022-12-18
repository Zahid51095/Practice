#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    int input[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    
    int largest = input[0];

    for ( i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
        
    }

    int ara [largest+1];
    
    for ( i = 0; i <= largest; i++)
    {
        ara[i] = 0;
    }
    
    for ( i = 0; i < n; i++)
    {
       ara[input[i]] += 1;
    }

    int count = 0;
    
    for ( i = largest; i >= 1; i--)     // minimum bolle loop ta forward order e calate hobe for(i = 1; i <= largest; i++)
    {
        if (ara[i] == 1)
        {
            count ++;
        }

        
        if (count == 3)
        {
            printf("3rd largest element is %d\n",i);
            break;
        }
    
        
       
    }
  
    return 0;

}