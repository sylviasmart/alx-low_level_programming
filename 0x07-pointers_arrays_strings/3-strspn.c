#include "string.h"

/**
 * _strspn - length of a prefix substring
 *  @s: inputs
 *  @accept: inputs
 *  Return: Number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int y = 0, z;

	while (s[y])
	{
		z = 0;

		while (accept[z])
		{
			if (s[y] == accept[z])
			{
				s += y;
				return (0);
			}

			z++;
		}

		y++;
	}
	return ('\0');

}
