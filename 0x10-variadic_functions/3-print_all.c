#include "variadic_functions.h"
/**
 * print_all - Prints arguemtns based on foramt string.
 * @format: A format string indicating the types of arguments.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;

	va_start(args, format);

	ptr = format;

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c_arg = va_arg(args, int);
			printf("%c", c_arg);
		}
		else if (*ptr == 'i')
		{
			i_arg = va_arg(args, int);
			printf("%d", i_arg);
		}
		else if (*ptr == 'f')
		{
			f_arg = va_arg(args, double);
			printf("%f", f_arg);
		}
		else if (*ptr == 's')
		{
			s_arg = va_arg(args, char*);
			if (s_arg == NULL)
				printf("(nil)");
			else
				printf("%s", s_arg);
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
