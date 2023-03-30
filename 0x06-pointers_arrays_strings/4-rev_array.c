#include"main.h"
/**
 *reverse_array - revers the interger of an array
 *@x: midpoint of array
 *@a: array
 *@n: size of the array
 *
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x = ((n-1)/2);
	int i, temp;

	for (i = 0; i <= x; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
