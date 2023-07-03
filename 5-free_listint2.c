#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer to head
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *current;
while (*head != NULL)
{
current = *head;
*head = current->next;
free(current);
}
head = NULL;
}
