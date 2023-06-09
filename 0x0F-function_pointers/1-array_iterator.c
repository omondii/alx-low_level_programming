#include "function_pointers.h"
/**
 *array_iterator - a function that executes a function given as parameter
 *@size: size of the array
 *@action: a function passed as a parameter
 *@array: an array with elements
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
