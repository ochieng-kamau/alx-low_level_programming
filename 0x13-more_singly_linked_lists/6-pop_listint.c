#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer to the address of the of the head of the list
 * Return: 0 if list is empty, else the head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
