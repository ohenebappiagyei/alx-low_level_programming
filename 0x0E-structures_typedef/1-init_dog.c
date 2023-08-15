#include <stdio.h>
#include "dog.h"
/**
 * init_dog - The function that initializes a variabe of type struct dog.
 * @d: A pointer to the struct dog variable
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: THe owner's name of the dog.
 *
 * This function initializes the given struct dog variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
