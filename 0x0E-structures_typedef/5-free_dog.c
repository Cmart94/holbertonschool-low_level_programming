#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: pointer to be free
 * Return: void function
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
