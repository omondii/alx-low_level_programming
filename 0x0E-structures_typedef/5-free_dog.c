#include <stdio.h>
#include "dog.h"
/**
 *free_dog - frees space allocated for struct
 *@d: pointer to dog_t address
 *Return: Ntothnig
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
