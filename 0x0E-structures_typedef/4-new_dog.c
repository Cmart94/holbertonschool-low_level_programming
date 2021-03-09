#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog in the memory
 * @name: pointer to the name dog name
 * @age: dog age in float
 * @owner: pointer to a owner name
 * Return: pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDogEntry;
	int lenN, lenO, i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDogEntry = malloc(sizeof(dog_t));
	if (newDogEntry == NULL)
		return (NULL);
	for (lenN = 0; name[lenN] != '\0'; lenN++)
	{}
	lenN++;
	newDogEntry->name = malloc(lenN * sizeof(char));
	if (newDogEntry->name == NULL)
	{
		free(newDogEntry);
		return (NULL);
	}
	for (i = 0; i < lenN; i++)
		newDogEntry->name[i] = name[i];
	for (lenO = 0; owner[lenO] != '\0'; lenO++)
	{}
	lenO++;
	newDogEntry->owner = malloc(lenO * sizeof(char));
	if (newDogEntry->owner == NULL)
	{
		free(newDogEntry);
		return (NULL);
	}
	for (j = 0; j < lenO; j++)
		newDogEntry->owner[j] = owner[j];
	newDogEntry->age = age;
	return (newDogEntry);
}
