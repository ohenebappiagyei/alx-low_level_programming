#include <stdio.h>

void __attribute__((constructor)) pre_main_function_message();

/**
 * pre_main_function_message - Prints a message before the main function
*/
void pre_main_function_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
