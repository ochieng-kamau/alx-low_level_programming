#include "lists.h"

/**
 * sum_listint - sums all elements of a list
 * @head: A pointer to the head of the listint_t list
 * Return: sum of data else 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
