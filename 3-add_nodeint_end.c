#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a linked list
* @head: pointer to the head
* @n: value to be stored
*
* Return: pointer to the node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *newnode;
current = *head;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
	return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (current == NULL)
{
	*head = newnode;
	return (newnode);
}
while (current->next != NULL)
{
current = current->next;
}
current->next = newnode;
return (newnode);
}
