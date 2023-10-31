#include "lists.h"
/**
 * check_cycle - check if a single linked list has a cercle in it
 * @list: pointer to the first node of the linked list
 * Return: 0 if there is no cercle, 1 if there is
 */
int check_cycle(listint_t *list)
{
	listint_t *curr, *nxt;

	if (list == NULL || list->next == NULL)
		return (0);

	curr = list;
	nxt = list->next;
	while (curr && nxt && nxt->next)
	{
		if (curr == nxt)
			return (1);

		curr = curr->next;
		nxt = nxt->next->next;
	}
	return (0);
}
