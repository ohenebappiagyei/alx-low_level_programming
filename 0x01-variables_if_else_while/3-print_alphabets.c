#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 * Description: This prints both uppercase and lowercase
*/
int main(void)
{
	char uppercase;
	char lowercase;
		/*print lowercase*/
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar (lowercase);
	}
	for (uppercase = 'A'; uppercase <=  'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
