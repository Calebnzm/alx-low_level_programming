#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: poinetr to the list
*
* Return: new head
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *prev;
prev = NULL;
current = *head;
while (*head != NULL)
{
*head = current->next;
current->next = prev;
prev = current;
current = *head;
}
*head = prev;
return (prev);
}
