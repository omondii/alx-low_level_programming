#include "main.h"
/**
 *prime_check - checks for prime numbers then passes it's result
 *@i: used to loop through and find perfect divisors
 *@n: number to be checked
 *Return: if prime (1) if not (0)
 */
int prime_check(int n, int i)
{
	if (i == 2)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, i - 1));
	}
}

/**
 *is_prime_number - checks for prime numbers recursively
 *@n: number to test
 *Return: if prime (1)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n / 2));
}
