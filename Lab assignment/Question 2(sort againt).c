#include <stdio.h>
#include <string.h>
 
void string_descending(char str[100]);
 
int main()
{
    char Strn[100];
  
    gets(Strn);

    string_descending(Strn);
 
    printf("%s", Strn);
    return 0;
}


void string_descending(char str[100])
{
    int i, j, temp,len;
    len = strlen(str);
 
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (str[j] < str[j + 1])
            {
               
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

}