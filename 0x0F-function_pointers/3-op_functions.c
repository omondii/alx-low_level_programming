#include "3-calc.h"
/**
 * op_add - addition operator
 * @a: argument 1
 * @b: argument 2
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operator
 * @a: first argument
 * @b: second argument
 * Return: difference of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of 2 numbers
 * @a: argument 1
 * @b: argument 2
 * Return: product of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first argument
 * @b: second argument
 * Return: result of the division of the numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: first argument
 * @b: second argument
 * Return: remainder of division of the numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
