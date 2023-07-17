#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct do
 * @d: struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
