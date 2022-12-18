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

    int duplicate = 0, unique = 0;
    
    for ( i = 1; i <= largest; i++)     
    {
        if (ara[i] == 1)
        {
            unique ++;
        }

        
        else if (ara[i] > 1)
        {
            duplicate++;
        }
    
    }

    printf("Total number of duplicate is %d\n",duplicate);

    printf("Total number of unique is %d",unique);

  
    return 0;

}