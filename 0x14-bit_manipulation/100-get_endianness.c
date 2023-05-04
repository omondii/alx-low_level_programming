#include "main.h"
/**
 *get_endianness - gets the order in which data types are stored
 * in computer memory
 *Return: if big endian (0)if little endian(1)
 */
int get_endianness(void)
{
	short int word = 0x0001;
	char *byte = (char *) &word;

	return (byte[0] ? 1 : 0);
}
