#include <stdio.h>
/**
 * main - Prints the file name of the program
 * Return: 0
 */
int main(void)
{
	const char *filename = __FILE__;

	while (*filename != '\0')
	{
		putchar(*filename);
		filename++;
	}
	putchar('\n');
	return (0);
}
