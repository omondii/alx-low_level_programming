#include "function_pointers.h"
/**
 *int_index - searchers for an interger
 *@array: array where intergers are checked
 *@size: size of the array
 *@cmp: function that checks intergers
 *Return: if no match -1 else i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
		return (-1);
}
