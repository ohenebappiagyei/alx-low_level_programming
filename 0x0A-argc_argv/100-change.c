#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculates the minimum number of coins needed
 * to make a change for a given cents
 * @cents: The amount of cents to make change for
 * @coins: An array of coin values.
 * @n: The number of elements in the coins array.
 * Return: numCoins
*/
int minCoins(int cents, int coins[], int numCoins)
{
	int i = 0; 

	if (cents < 0)
	{
		return (0);
	}

	while (cents > 0)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
		i++;
	}

	return (numCoins);
}

/**
 * main - Prints the minimum number of coins needed to make for an amount
 *
 * @argc: The number of arguments passes to the program.
 * @argv: The arguments passed to the program.
 * Return: 0 if exits successfully, 1 if an error occurs
*/
int main(int argc, char *argv[])
{
	int cents;
	int numCoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);
	numCoins = minCoins(cents, coins, numCoins);

	printf("%d\n", numCoins);

	return (0);
}

