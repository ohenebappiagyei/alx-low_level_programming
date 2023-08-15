#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Represents a dog's information..
 * @name: This is the name of the dog.
 * @age: This is the age of the dog.
 * @owner: This is the name of the dog's owner.
 *
 *This structure holds information about a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
