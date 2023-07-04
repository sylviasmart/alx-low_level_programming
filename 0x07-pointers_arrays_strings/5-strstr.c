#include "string.h"

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int y = 0, z = 0;

	while (haystack[y])
	{
		while (needle[z])
		{
			if (haystack[y + z] != needle[z])
			{
				break;
			}

			z++;
		}

		if (needle[z] == '\0')
		{
			return (haystack + y);
		}

		y++;
	}

	return ('\0');
}
