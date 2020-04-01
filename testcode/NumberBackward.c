#include <stdio.h>

void number(long num)
{
    while (num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
}

int main()
{
    long num;

    scanf("%ld", &num);
    number(num);

    return 0;
}