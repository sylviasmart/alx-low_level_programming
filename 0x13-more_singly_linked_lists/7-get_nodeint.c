#include "lists.h"

/**
 * get_nodeint_at_index - This returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count_nodes = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
if (count_nodes == index)
return (current_node);

current_node = current_node->next;
count_nodes++;
}

return (NULL);
}

