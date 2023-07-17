#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		if (d.name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (d.age == NULL)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d.owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}

