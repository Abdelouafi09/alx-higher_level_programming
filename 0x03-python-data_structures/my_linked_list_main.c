#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 1);
	print_listint(head);

	if (is_palindrome(&head) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

	free_listint(head);

	/* added test*/
	head = NULL;
	printf("\nhead = null\n");
        print_listint(head);

        if (is_palindrome(&head) == 1)
                printf("Linked list is a palindrome\n");
        else
                printf("Linked list is not a palindrome\n");

        free_listint(head);

	head = NULL;
        printf("\nOne element\n");
	add_nodeint_end(&head, 1);
        print_listint(head);

        if (is_palindrome(&head) == 1)
                printf("Linked list is a palindrome\n");
        else
                printf("Linked list is not a palindrome\n");

        free_listint(head);

	head = NULL;
	printf("\nNone palendrome even: \n");
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 17);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 17);
        add_nodeint_end(&head, 12);
        print_listint(head);

        if (is_palindrome(&head) == 1)
                printf("Linked list is a palindrome\n");
        else
                printf("Linked list is not a palindrome\n");

        free_listint(head);

	head = NULL;
        printf("\nNone palendrome odd: \n");
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 17);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 17);
        print_listint(head);

        if (is_palindrome(&head) == 1)
                printf("Linked list is a palindrome\n");
        else
                printf("Linked list is not a palindrome\n");

        free_listint(head);

	head = NULL;
        printf("\npalendrome odd: \n");
        add_nodeint_end(&head, 1);
        add_nodeint_end(&head, 17);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 9);
        add_nodeint_end(&head, 98);
        add_nodeint_end(&head, 50);
        add_nodeint_end(&head, 972);
        add_nodeint_end(&head, 17);
        add_nodeint_end(&head, 1);
        print_listint(head);

        if (is_palindrome(&head) == 1)
                printf("Linked list is a palindrome\n");
        else
                printf("Linked list is not a palindrome\n");

        free_listint(head);

	return (0);
}
