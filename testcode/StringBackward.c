#include <stdio.h>

void string(char *str)
{
    int  idx = 0;
    while(str[idx++] != '\0');
    idx--;
    idx--;
    while(idx >= 0)
    {
        printf("%c", str[idx--]);
    }
    printf("\n");
}

int main()
{
    char str[10000];
    
    while(gets(str))
    {
        string(str);
    }

    return 0;
}