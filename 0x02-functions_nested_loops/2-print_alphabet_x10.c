#include "main.h"

/**
* print_alphabet_x10 - Alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (1 <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
