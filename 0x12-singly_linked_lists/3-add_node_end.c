#include "lists.h"

/**
* add_node_end - add node to the end of a list
* @h: pointer to the head
* @str:  the string to be added to the node
*
*Return: number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tail;
list_t *newnode;

newnode = (list_t *)malloc(sizeof(list_t));
if (newnode == NULL)
{
	return (NULL);
}
if (str == NULL)
{
	newnode->str = NULL;
	newnode->len = strlen(str);
	newnode->next = NULL;
}
else
{
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
}
if (*head == NULL)
{
	*head = newnode;
}
else
{
	tail = *head;
	while (tail->next != NULL)
	{
	tail = tail->next;
	}
	tail->next = newnode;
}
return (newnode);
}
