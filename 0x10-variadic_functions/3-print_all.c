#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints arguments based on the format string.
 * @format: A string containing format specifiers.
 * ...: Arguements corresponding to the format specifiers.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr;
	int i;
	char c;
	float f;
	char *s;

	va_start(args, format);
	ptr = format;
	i = 0;
	c = '\0';
	f = 0.0;
	s = NULL;

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*ptr == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		ptr++;
	}
	va_end(args);

	printf("\n");
}
