#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a struct dog that holds details abot a dog
 *@name: name of the dog, data type char
 *@age: age of the dog, type int
 *@owner: dog owners name
 *
 *Description: Struct dog holds the name, age and owner details of a dog in the
 *same block of memory
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
