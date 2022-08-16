#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node
 *@head:the head
 *@index:the index
 *Return:nth node or NULL if the node not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
