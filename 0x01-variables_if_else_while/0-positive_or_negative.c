#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
 *A program that checks if a number is
 *negative or positive
 *
 *main - program entry point
 *function to check if a number os negative or positive
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);

	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
