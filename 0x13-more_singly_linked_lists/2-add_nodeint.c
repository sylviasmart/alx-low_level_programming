#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - This adds a new node at the beginning of a listint_t list
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element (node), or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node_num = malloc(sizeof(listint_t));

if (new_node_num == NULL)
return (NULL);

new_node_num->n = n;
new_node_num->next = *head;
*head = new_node_num;


return (new_node_num);
}

