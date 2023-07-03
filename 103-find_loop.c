#include "lists.h"

/**
* find_listint_loop - finds the start of a loop in a linked list
* @head: pointer to begining of list
*
* Return: the node where loop starts
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *hare, *tortoise;
hare = tortoise = head;
if (head == NULL)
{
	return (NULL);
}
while (hare != NULL && hare->next != NULL)
{
hare = hare->next->next;
tortoise = tortoise->next;

if (hare == tortoise)
{
tortoise = head;
while (tortoise != hare)
{
hare = hare->next;
tortoise = tortoise->next;
}
return (tortoise);
}
}
return (NULL);
}
