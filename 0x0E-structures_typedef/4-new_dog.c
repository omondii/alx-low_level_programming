#include <stdlib.h>
#include "dog.h"
/**
 *new_dog: creating a struct of type dog
 *@name: dogs name
 *@age: the dogs age
 *@owner: Owner of the dog
 *@dog1: new dog
 *Returns: pointer to that string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *dog1;

	nlen =  olen = 0;
	while (name[nlen++])
		;
	while (name[nlen])
		;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(nlen * sizeof(dog1->name));
	if (dog1 == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		dog1->name[i] = name[i];

	dog1->age = age;

	dog1->owner = malloc(olen *sizeof(dog1->owner));
	if (dog1 == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		dog1->owner[i] = owner[i];
	return (dog1);
}
