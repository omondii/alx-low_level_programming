#include "search_algos.h"

/**
 *linear_search -  for a value in an array using linear search
 *@array: emacs pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: First occurence of value
 */
int linear_search(int *array, size_t size, int value)
{

	if (size == 0)
		return (-1);
	// check of the current value of array, if it equals value. return it
	if (array[size - 1] == value)
	{
		return (size - 1);
	}
	// Recursively iterate over the array
	printf("Value checked array[%lu] = [%d]\n", size - 1, array[size - 1]);
	return linear_search(array, size - 1, value);
}
