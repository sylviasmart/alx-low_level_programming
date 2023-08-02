#include "lists.h"

/**
 * pop_listint - This deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: Pointer to the pointer of the head of the list
 *
 * Return: The data node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp_num;

if (head != NULL && *head != NULL)
{
temp_num = *head;
data = temp_num->n;
*head = temp_num->next;
free(temp_num);
}

return (data);
}

