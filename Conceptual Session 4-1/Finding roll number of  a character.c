#include<stdio.h>

int main()
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    while (str[i] != '\0')
    {
        int alphabetRollNumber = (str[i] - 'a') + 1;
        printf("%c  -> %d\n", str[i], alphabetRollNumber);
        i++;
    }
    
    return 0;
}