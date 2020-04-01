#include <stdio.h>

int main(void)
{
    int   idx = 0;
    int   num = 0;
    char  str[1000];
    char  ch, ch1, ch2;

    gets(str);
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch1 = ch;
        ch2 = ch - 'A' + 'a';
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch1 = ch;
        ch2 = ch - 'a' + 'A';
    }

    while (idx < 1000 && str[idx] != '\0')
    {
        if (str[idx] == ch1 || str[idx] == ch2)
        {
            num++;
        }
        idx++;
    }

    printf("%d", num);
    return 0;
}