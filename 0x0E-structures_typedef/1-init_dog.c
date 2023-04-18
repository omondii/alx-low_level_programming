#include <stdio.h>
#include "dog.h"
/**
 * struct dog - initializes a varible of type struct dog
 *@d: pointer to struct dog
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
