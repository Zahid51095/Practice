#include<stdio.h>
#include<string.h>

int main()

{
    char sent [100];
    scanf("%s",sent);
    int i = 0;
    while (sent[i] != '\0')
    {
        printf("%c ", sent[i]);
        i++;
    }
    
 
 
 return 0;

}