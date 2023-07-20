#include <stdio.h>
/**
 * void print_times_table - prints number times table
 *
 * @n: This is the number to print it's times table
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i = 0;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		int col = 0;

		while (col <= n)
		{
			if (((col + 1) * i) > 9 && ((col + 1) * i) < 100 && col < n)
			{
				printf("%d, ", col * i);
			}
			else if (((col + 1) * i) > 9 && ((col + 1) * i) > 99 && col < n)
			{
				printf("%d, ", col * i);
			}
			else if (((col + 1) * i) < 10 && col < n)
			{
				printf("%d, ", col * i);
			}
			else
				printf("%d\n", col * i);
			col++;
		}
		i++;
	}
}
