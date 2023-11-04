#include "lists.h"
#include <stdio.h>
/**
 * is_palindrome - check if a linked list is palindrome
 * @head: the head pointer of the linked list
 * Return: 0 if not palindrome, 1 if it is
 */
int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	size_t copy_size, length = 0, i;
	int *list_copy;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	copy_size = length / 2 ;
	list_copy = malloc(copy_size * sizeof(int));

	if (list_copy == NULL)
	{
		perror("memory issue");
		return (0);
	}

	current = *head;
	i = copy_size;

	while (i)
	{
		i--;
		list_copy[i] = current->n;
		current = current->next;
	}

	if (length % 2 != 0)
		current = current->next;

	for (i = 0; i < copy_size; i++)
	{
		if (list_copy[i] != current->n)
		{
			free(list_copy);
			return(0);
		}
		current = current->next;
	}

	free(list_copy);
	return(1);
}
