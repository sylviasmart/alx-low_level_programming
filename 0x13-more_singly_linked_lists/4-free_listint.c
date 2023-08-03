#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function helps to frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: nothing
 * Description: This funcion is used to free a linked list of listint_t
 */
void free_listint(listint_t *head)
{
listint_t *next;

while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
