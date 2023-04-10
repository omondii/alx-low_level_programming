#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - adds two numbers
 *@argc: counts number of arguments passed
 *@argv: array of strings, store entered arguments
 *Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 2)
		{
			printf("0\n");
			return (1);
		}
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}
	printf("%i\n", result);
	return (0);
}
