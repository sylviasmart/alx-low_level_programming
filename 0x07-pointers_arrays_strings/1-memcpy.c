#include <string.h>

/**
 * *_memcpy - function that copies the memory area
 * @dest: Memory area copied to
 * @src: Memory area copied from
 * @n: bytes memory
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
