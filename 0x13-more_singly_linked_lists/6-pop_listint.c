#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The data (n)..
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);

	return (num);
}
