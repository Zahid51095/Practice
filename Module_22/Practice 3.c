#include<stdio.h>

int is_Vowel(char x);

int main()
{
    char ch;
    scanf("%c",&ch);

    if (is_Vowel(ch) == 1)
    {
        printf("The character is vowel.\n");
    }
    else
    {
        printf("The character is consonant.\n");
    }
    return 0;

}

int is_Vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}