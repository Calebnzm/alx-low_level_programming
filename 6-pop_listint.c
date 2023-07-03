#include "lists.h"

/**
* pop_listint - removes the head of a linked list
* @head: pointer to the head
*
* Return: the value stored in the head node
*/
int pop_listint(listint_t **head)
{
listint_t *current;
int value;
current = *head;
*head = current->next;
value = current->n;
free(current);
return (value);
}
