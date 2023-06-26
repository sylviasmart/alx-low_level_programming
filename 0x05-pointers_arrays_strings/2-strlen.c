#include "stdio.h"

/**
 * _strlen - Returns the length of a string
 * @s: String length
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

