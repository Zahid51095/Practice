#include<stdio.h>
int main()
{
    char sen[20];

    fgets(sen,sizeof(sen),stdin);

   int i = 0;

   while (sen[i] != 0)
   {
        if (sen[i] >= 'a' && sen[i] <= 'z')
        {
            sen[i] -= 32;
            
        }
        
        i++;
        
   }
   

  puts(sen);
    
    
    return 0;
}