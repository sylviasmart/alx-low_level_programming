#include "main.h"
/**
 * print_most_numbers - 4-print_most_numbers.c
 * description: print numbers except 2 and 4
 * Return: the numbers since its 0 to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (x; <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar(\'n');
}
