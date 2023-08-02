#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp_num;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp_num);
}
}

