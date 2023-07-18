#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i, j;
	dog_t *d;

	len1 = strlen(name);
	len2 = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	d->age = age;
	for (i = 0; i < len1; i++)
	{
		d->name[i] = name[i];
	}
	for (j = 0; j < len2; j++)
	{
		d->owner[i] = owner[j];
		i++;
	}
	d->owner[i] = '\0';
	return (d);
}


