#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to the address of the head
 * of the list_t list
 *
 * return: a pointer to the frist node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
