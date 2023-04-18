#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a varible of type struct dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: dog owner
 *@d: pointer to struct dog
 *Return: Nothing
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
