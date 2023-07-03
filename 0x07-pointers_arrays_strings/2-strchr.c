#include "string.h"

/**
 * _strchr - function that locates a character in string
 * @s: String input
 * @c: character input
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int y = 0, z;

	while (s[y])
	{
		y++;
	}
	for (z = 0; z <= y; z++)
	{
		if (c == s[z])
		{
			s += z;
			return (s);
		}
	}

	return ('\0');
}
