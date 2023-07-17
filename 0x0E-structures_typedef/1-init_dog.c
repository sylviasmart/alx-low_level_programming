#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - initializes a dog
 * @d: The structure of the dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: The dog owner's name
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
