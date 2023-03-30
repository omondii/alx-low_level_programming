#include"main.h"
/**
 *reverse_array - revers the interger of an array
 *@a: array
 *@n: size of the array
 *
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i <= (n/2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
