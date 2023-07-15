#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
 * Description:The last digited is printed.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int LastDigit = n % 10;

	/* if the last digit of n is greater than 5 */
	if (LastDigit > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	/* if the last digit of n is 0 */
	else if (LastDigit == 0)
	{
		printf("the last digit of %d is 0\n", n);
	}
	/* if the last digit of n is less than 6 and not 0 */
	else if (LastDigit < 6)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n",
			n, LastDigit);
	}

	return (0);
}
