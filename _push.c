#include "monty.h"
/**
*_push - a function to push an element in the stack
*@value: the value to push
*@head: the header of the stack
*/
void _push(int value, stack_t **head)
{
	stack_t *node, *h;

	node = malloc(sizeof(stack_t));
	h = *head;
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = value;
	node->next = *head;
	if (h != NULL)
		h->prev = node;
	node->prev = NULL;
	*head = node;
}
