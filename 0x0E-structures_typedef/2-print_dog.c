#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog's info.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %p\n", d->name);
		printf("Age: %p\n", d->age);
		printf("Owner: %p\n" d->owner);
	}
}
