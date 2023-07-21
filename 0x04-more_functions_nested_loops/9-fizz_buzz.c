#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (successful)
 * Description: Prints the numbers from 1 to 100 followed by new line
 * if the number is a multiple of 3, Fizz
 * if the number is a multiple of 5, Buzz
 * if the number is a multiple of 3 and 5, FizzBuzz
*/
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i / 3) == 0)
			printf("Fizz");
		else if ((i / 5) == 0)
			printf("Buzz");
		else if (((i / 3) == 0) && ((i / 5) == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
