#include "lists.h"

/**
 *pop_listint - deletes the head
 *@head:the of the listint_t list
 *
 *Return:n or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp1;
	listint_t *temp2;

	if (*head == NULL)
		return (0);
	temp1 = *head;
	n = temp1->n;
	temp2 = temp1->next;
	free(temp1);
	*head = temp2;
	return (n);
}
