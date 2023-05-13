#include "main.h"
#include <stdio.h>
/**
 *read_textfile - reads textfiles and prints it to the posix std output
 *filename: name of the file to print
 *letters: number of letters it should read and print
 *Returns: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	ssize_t counted;
	FILE *file;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	count = fread(buffer, sizeof(char), letters, file);
	if (count <= 0)
	{
		fclose(file);
		return (0);
	}
	buffer[count] = '\0';

	counted = fwrite(buffer, sizeof(char), count, stdout);
	if (count != (ssize_t)(counted))
	{
		fclose(file);
		return (0);
	}
	fclose(file);
	return (count);
}
