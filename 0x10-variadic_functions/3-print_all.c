#include <stdio.h>
#include <stdarg.h>
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
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	ptr = format;

	while (ptr && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (*(ptr + 1) != '\0' && (*ptr == 'c' || *ptr == 'i' ||
					*ptr == 'f' || *ptr == 's'))
			printf(", ");
		ptr++;
	}
	va_end(args);

	printf("\n");
}
