#include "main.h"
#include<string.h>
/**
 *create_file - creates a file
 *@filename: The file to create
 *@text_content: A string to write into the file
 *Return: 1 on success. -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		count = write(file, text_content, strlen(text_content));
		if (count == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (-1);
}
