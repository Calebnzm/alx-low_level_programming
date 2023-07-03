#include "lists.h"

/**
* free_listint_safe - frees list that may have a loop
* @h: pointer to list
*
* Return: number of freed nodes
*/
size_t free_listint_safe(listint_t **h)
{
unsigned int number, addrs_size, i;
listint_t *current, *hare, *tortoise, *temp;
listint_t **addrs;
hare = tortoise = *h;
addrs = NULL;
number = addrs_size = 0;
while (hare != NULL && hare->next != NULL)
{
hare = hare->next->next;
tortoise = tortoise->next;
if (hare == tortoise)
{
break;
}
}
current = *h;
while (current != NULL)
{
for (i = 0; i < addrs_size; i++)
{
if (addrs[i] == current)
{
free(addrs);
return (number);
}
}
temp = current;
current = current->next;
free(temp);
number++;
addrs_size++;
addrs = (listint_t **)realloc(addrs, addrs_size *sizeof(listint_t *));
addrs[addrs_size - 1] = temp;
}
free(addrs);
return (number);
}
