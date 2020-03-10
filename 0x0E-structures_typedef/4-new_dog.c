#include "dog.h"
#include <stdlin.h>

/**
 * new_dog - initialize a variable of type struct dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's human slave.
 *
 * Return: return a pointer to new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return(NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return(d);
}
