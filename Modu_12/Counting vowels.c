#include<stdio.h>
int main()
{
    char sen[1000];

    fgets(sen,sizeof(sen),stdin);

    int i = 0, vowels  = 0, consonant = 0;

    while (sen[i] != 0)
    {
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
            
        {
            vowels++;
        }

        else if (sen[i] > 'a' && sen[i] < 'z')
        {
            consonant++;
        }
        
        i++;
        
        
    }

    printf("Vowels- %d\n",vowels); 
    printf("Consonants- %d",consonant);
    
    return 0;
}