#include <stdio.h>

int main()
{
    int  idx = 0;
    char str[10000];
    
    while(gets(str))
    {
        idx = 0;
        while(str[idx] != '\0')
        {
            if (str[idx] == ' ')
            {
                str[idx] = '\0';
            }
            idx++;
        }

        idx--;
        while(idx >= 0)
        {
            if (str[idx] == '\0')
            {
                printf("%s ", str + idx + 1);
            }
            else if (idx == 0)
            {
                printf("%s ", str);
            }
            idx--;
        }
        printf("\n");
    }

    return 0;
}