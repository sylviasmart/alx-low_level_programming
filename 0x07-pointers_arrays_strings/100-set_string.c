#include "string.h"
#include "main.h"

/**
 * set_string - sets value of pointer to char
 * @s: string input
 * @to: value to assign
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
