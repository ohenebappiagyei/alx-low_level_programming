#include <stdio.h>
/**
 * main - print sum of even-value terms within 2 - 4,000,000
 *
 * Return: 0 (success)
*/
int main(void)
{
	long int printed[50];
	unsigned long int sum = 0;
	int counter = 0;

	while (sum <= 4000000)
	{
		if ((counter + 1) == 1 || (counter + 1) == 2)
		{
			printed[counter] = counter;
			sum += (counter % 2) == 0 ? counter : 0;
		}
		else
		{
			unsigned long int fnum = printed[counter - 1] + printed[counter - 2];

			printed[counter] = fnum;
			sum += (fnum % 2) == 0 ? fnum : 0;
		}
		counter++;
	}
	printf("%lu\n", sum);
	return (0);
}
