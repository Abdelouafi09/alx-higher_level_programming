#include "lists.h"
/**
 * insert_node - insert a new node to sorted linked list
 * @head: pointer to the head of the linked list
 * @number: new value to add
 * Return: the linked list head pointer
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *less, *greater;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	less = NULL;
	greater = *head;
	if (greater == NULL)
	{
		*head = new;
		new->next = greater;
		return (new);
	}
	while (1)
	{
		if (greater->n < number)
		{
			less = greater;
			greater = greater->next;
			if (greater == NULL)
			{
				less->next = new;
				new->next = greater;
				return (new);
			}
		}
		else
		{
			if (greater == *head)
			{
				*head = new;
				new->next = greater;
				return (new);
			}
			less->next = new;
			new->next = greater;
			return (new);
		}
	}
}
