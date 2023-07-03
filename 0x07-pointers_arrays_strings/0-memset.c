#include <string.h>
#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: Pointer to start memory
 * @b: Constant bytes
 * @n: First byte of memory block
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}
