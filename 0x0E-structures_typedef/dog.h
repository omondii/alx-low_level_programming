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
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
