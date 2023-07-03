#include "lists.h"

/**
* listint_len - calculates the no of elements of a linked list
* @h: pointer to the head
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
int elements;
const listint_t *current;
elements = 0;
current = h;
while (current != NULL)
{
elements++;
current = current->next;
}
return (elements);
}
