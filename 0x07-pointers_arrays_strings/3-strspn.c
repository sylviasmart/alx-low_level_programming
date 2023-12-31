#include "string.h"

/**
 * _strspn - length of a prefix substring
 *  @s: inputs
 *  @accept: inputs
 *  Return: Number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0, z, n = 0;

	while (accept[y])
	{
		z = 0;

		while (s[z] != 32)
		{
			if (accept[y] == s[z])
			{
				n++;
			}
			z++;
		}

		y++;
	}
	return (n);

}
