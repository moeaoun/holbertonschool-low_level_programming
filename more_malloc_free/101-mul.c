#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_digit(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    long num1 = atol(argv[1]);
    long num2 = atol(argv[2]);
    printf("%ld\n", num1 * num2);

    return 0;
}

