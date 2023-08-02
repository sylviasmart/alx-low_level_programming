#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - This functions frees a listint_t linked list safely.
 * @h: Pointer to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count_nodes = 0;
listint_t *current = *h;
listint_t *temp = NULL;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
count_nodes++;

if (temp <= current)
{
*h = NULL;
break;
}
}

return (count_nodes);
}

