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
if (str != NULL)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
return (NULL);
}
