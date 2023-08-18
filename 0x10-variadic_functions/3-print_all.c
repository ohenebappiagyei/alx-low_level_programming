#include "variadic_functions.h"
/**
 * print_all - Prints arguments based on the format string.
 * @format: A string containing format specifiers.
 * ...: Arguements corresponding to the format specifiers.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr;
	char c, *s;
	int i;
	float f;

	va_start(args, format);
	ptr = format;
	while (ptr && *ptr)
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
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
				printf("(nil)");
			else
				printf("%s", s);
		}
	if (*(ptr + 1) != '\0' && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f'
		|| *ptr == 's'))
		printf(", ");
	ptr++;
}
va_end(args);
printf("\n");
}
