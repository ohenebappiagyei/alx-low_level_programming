#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
 * Description: Printing numbers of base 16 (hexadecimal) in lowercase
 */
int main(void)
{
                char digit;

                for (digit = '0'; digit <= '9'; digit++)
                {
                    putchar(digit);
                }
                for (digit = 'a'; digit <= 'f'; digit++)
                {
                putchar(digit);
                }
        putchar('\n');
        return (0);
}

