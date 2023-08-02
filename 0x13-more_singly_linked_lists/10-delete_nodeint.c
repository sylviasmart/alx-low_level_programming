#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: Index of the list where the new node should be added
 * (the index should start at 0).
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed to add the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node = NULL;
unsigned int count_nodes = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (count_nodes < idx && *head != NULL)
{
prev_node = *head;
*head = (*head)->next;
count_nodes++;
}

if (*head == NULL && count_nodes != idx)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
prev_node->next = new_node;

return (new_node);
}

