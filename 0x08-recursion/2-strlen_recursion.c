#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: String to be printed
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
