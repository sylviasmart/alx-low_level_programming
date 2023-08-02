#include "lists.h"

/**
 * reverse_listint - This helps to reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node_count = NULL, *next_node;

while (*head != NULL)
{
next_node = (*head)->next;
(*head)->next = prev_node_count;
prev_node_count = *head;
*head = next_node;
}

*head = prev_node_count;
return (*head);
}

