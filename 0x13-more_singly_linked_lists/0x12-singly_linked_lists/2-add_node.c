#include "lists.h"

/**
* add_node - adds nodes to a list
* @h: pointer to the head
* @str:  the string to be added to the node
*
*Return: number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;

newnode = (list_t *)malloc(sizeof(list_t));
if (newnode == NULL)
{
	return (NULL);
}
if (str == NULL)
{
	newnode->str = NULL;
	newnode->next = *head;
	*head = newnode;
}
else
{
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
}
return (newnode);
}
