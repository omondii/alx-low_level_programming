#include"main.h"
/**
 *swap_int - swaps two intergers
 *
 *@a: variable
 *@b: variable
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
