#include<stdio.h>
int main()
{
      for (int i = 1; i <= 10; i++)
    {
        // condition er moddheo continue lagano jai.
        if (i <= 5)
        {
            continue;
        }
        
        printf("%d\n",i);
    }
    
    return 0;
}