#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, and NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N;

	n = malloc(sizeof(listint_t));
	if (!N)
		return (NULL);

	N->n = n;
	N->next = *head;
	*head = N;

	return (N);
}
