#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - The functions prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count_nodes = 0;
const listint_t *current = head;
const listint_t *temp = NULL;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count_nodes++;

if (current >= current->next)
{

temp = current->next;
printf("-> [%p] %d\n", (void *)temp, temp->n);
break;
}

current = current->next;
}

return (count_nodes);
}

