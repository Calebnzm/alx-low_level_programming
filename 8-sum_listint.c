#include "lists.h"

/**
* sum_listint - sums all the data in a list
* @head: pointer to the list
*
* Return: the sum
*/
int sum_listint(listint_t *head)
{
listint_t *current;
int sum;
sum = 0;
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
