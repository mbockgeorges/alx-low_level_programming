#include "lists.h"

/**
 *sum_listint - returns the sum
 *@head:head of list
 *Return:sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	for (; head != NULL;)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
