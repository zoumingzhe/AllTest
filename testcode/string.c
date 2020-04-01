#include <stdio.h>

int main()
{
    int  idx = 0;
    char str[10000];
    
    while(gets(str))
    {
        idx = 0;
        while(str[idx++] != '\0');
        idx--;
        idx--;
        while(idx >= 0)
        {
            printf("%c", str[idx--]);
        }
        printf("\n");
    }

    return 0;
}