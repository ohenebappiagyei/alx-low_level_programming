#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 * Description: Prints alphabets except 'q' and 'e'
*/
int main(void)
{
	char letters;
	/*print letters*/
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
