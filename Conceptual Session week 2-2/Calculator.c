#include<stdio.h>

int main()
{
    while (5)
    {
        int a,b;
        char ch;
        char cancel;

        printf("Press c for cancel and e for execute: ");
        scanf("%c", &cancel);

        
        if (cancel == 'c')
    
    {
        cancel = '\0';
        scanf("%d %c %d", &a,&ch,&b);

        int result;

        if (ch == '+')
        {
            result = a + b;
        }

        
        else if (ch == '-')
        {
            result = a - b;
        }

        else if (ch == '*')
        {
            result = a * b;
        }

        else if (ch == '/')
        {
            result = a / b;
        }

        printf("%d\n",result);
        
        }

        else if (cancel == 'e')
        {
            cancel = '\0';
            break;
        }
        
        }
    
    return 0;
}