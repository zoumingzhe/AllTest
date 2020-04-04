#include <stdio.h>

int substring(char *str1, char *str2)
{
    int idx1 = 0;
    int idx2 = 0;

    while(str1[idx1] != '\0')
    {
        if (str1[idx1] == str2[idx2])
        {
            idx2++;
        }
        else
        {
            idx1 -= idx2;
            idx2 = 0;
        }
        
        if (str2[idx2] == '\0')
        {
            return 1;
        }
        idx1++;
    }
    return 0;
}

int main(void)
{
    char  str1[1000];
    char  str2[1000];

    gets(str1);
    gets(str2);

    if (substring(str1, str2))
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}