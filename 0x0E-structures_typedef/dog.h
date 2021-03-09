#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - parameters info of the dog
 * @name: pointer to the name
 * @age: float for the age
 * @owner: char to the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
