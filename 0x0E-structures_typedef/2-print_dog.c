#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the contents of a struct dog.
 * @d: A pointer to the struct dog variable to be printed.
 *
 * This funtion prints the contents of the provided struct dog variable.
 * If an element of d is NULL, it prints (nil) instead of that element.
 * If d is NULL< it prints nothing.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
