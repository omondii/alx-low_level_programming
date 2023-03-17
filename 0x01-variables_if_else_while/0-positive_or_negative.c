#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* A program that checks if a number is
 *negative or positive
 *
 *main - Entry point
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
	else
	{
		printf("%d  is negative\n", n);
	}
	return (0);
}
