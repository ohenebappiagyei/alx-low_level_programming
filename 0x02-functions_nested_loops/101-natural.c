#include <stdio.h>
/**
 * main - entry point
 * @void: Accept no argument
 *
 * Return: void
*/

int main(void)
{
	int sum;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
