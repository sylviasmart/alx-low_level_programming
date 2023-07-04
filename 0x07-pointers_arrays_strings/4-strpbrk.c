#include "string.h"

/**
 * _strpbrk - string for any set of bytes
 * @s: string
 * @accept: bytes in string
 * Return: Pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
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
				return (s);
			}

			z++;
		}

		y++;
	}
	return ('\0');
}
