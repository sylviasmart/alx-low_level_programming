#include <stdio.h>
#include "lists.h"

/**
 * print_listint - This prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t count_num = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count_num++;
}

return (count_num);
}

