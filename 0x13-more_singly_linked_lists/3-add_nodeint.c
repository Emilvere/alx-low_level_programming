#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a node at the end of a listint_t
 * @head: pointer to the first element in the list
 * @n:integer to contain the new element
 *
 * Return: pointer to the new node, otherwise NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
