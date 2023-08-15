#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog and initializes its elements.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 *
 * Return: A pointer to the newly created struct dog or NULL if memory fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the bew dog structure */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory for name and owner and copy the provided strings */
	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	/* Check if memory allocation for strings failed */
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Assign age */
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
