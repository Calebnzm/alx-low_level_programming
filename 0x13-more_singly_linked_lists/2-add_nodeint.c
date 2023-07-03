#include "lists.h"

/**
* add_nodeint - adds a node to the begining of a linked list
* @head: pointer to the head
* @n: value to be stored
*
* Return: pointer to the node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
