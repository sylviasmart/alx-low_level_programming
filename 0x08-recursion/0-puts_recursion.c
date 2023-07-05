#include "stdio.h"
#include "main.h"

/**
 * _puts_recursion - print new string followed by a new line
 * @s: string input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
