#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * _strlen - function that return the length o
 * a string
 * @s:s is a character
 * return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginning
 * of a link list
 * @head: double pointer to the list_t list
 * @str:new string to add in the node
 *
 * return: the address of the new element, or NUiLL
 * if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
