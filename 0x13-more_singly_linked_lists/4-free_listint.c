#include "lists.h"

/**
 *free_listint - free
 *@head:the head
 *Return: NULL if failed
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
