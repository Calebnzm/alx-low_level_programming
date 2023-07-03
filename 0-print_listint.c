#include "lists.h"

/**
* print_listint - prints the elements of alinked list
* @h: pointer to the head
*
* Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
int elements;
const listint_t *current;
elements = 0;
current = h;
while (current != NULL)
{
elements++;
printf("%d\n", current->n);
current = current->next;
}
return (elements);
}
