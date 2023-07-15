#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 * Description: prints all possible combinations
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
